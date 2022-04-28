#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct produto{
	char nome[50];
	int codigo;
	int estoque;
	double valor;
};
struct produto produtos[200];
int sequencia=0,nvenda=0;
double vendas[200];

//1 - função de cadastrar o produto
cadastrarProduto(){
	system("cls"); //limpa tela
	printf("\nDigite o nome do produto: ");
	fflush(stdin);
	gets(produtos[sequencia].nome);
	printf("\nDigite o valor do produto: ");
	scanf("%lf", &produtos[sequencia].valor);
	printf("\nDigite a quantidade em estoque: ");
	scanf("%d", &produtos[sequencia].estoque);
	printf("\nCadastro realizado com sucesso!\n");
	system("pause");
	system("cls");
	printf("\nDados do produto cadastrado: ");
	produtos[sequencia].codigo=sequencia+1;
	printf("\nCódigo: %d", produtos[sequencia].codigo);
	printf("\nNome: %s", produtos[sequencia].nome);
	printf("\nValor: R$%0.2lf", produtos[sequencia].valor);
	printf("\nEstoque: %d\n", produtos[sequencia].estoque);
	sequencia++;
	system("pause");
}

//2 - função de entrada do estoque
entradaEstoque(){
	int codigo, x, entrada, achou;
	system("cls");
	printf("\nDigite o código do produto: ");
	scanf("%d", &codigo);
	for(x=0;x<=sequencia;x++){
		if(produtos[x].codigo==codigo){
			printf("\nEstoque atual do produto: %d", produtos[x].estoque);
			printf("\nDigite a quantidade de entrada em estoque: ");
			scanf("%d", &entrada);
			produtos[x].estoque+=entrada;
			printf("\nNovo estoque ajustado: %d\n", produtos[x].estoque);
			achou=1;
			break;
		}else {
			achou=0;
		}
	}
	if(achou==0){
		printf("\nProduto não encontrado.\n");
	}
	system("pause");
}

//3 - função ajustar o cadastro
ajusteCadastro(){
	int codigo, x, entrada, achou;
	double valor;
	char nome[50];
	system("cls");
	printf("\nDigite o código do produto: ");
	scanf("%d", &codigo);
	for(x=0;x<=sequencia;x++){
		if(produtos[x].codigo==codigo){
			printf("\nNome: %s", produtos[x].nome);
			printf("\nValor: %0.2lf", produtos[x].valor);
			printf("\nDigite o novo nome: ");
			fflush(stdin);
			gets(produtos[x].nome);
			printf("\nDigite o novo valor: ");
			scanf("%lf", &produtos[x].valor);
			printf("\nCadastro atualizado com sucesso!\n");
			achou=1;
			break;
		}else {
			achou=0;
		}
	}
}

//4 - função de listar o registro de códigos dos produtos
listaTodos(){
	int x;
	system("cls");
	if(produtos[0].codigo>0){
		for(x=0;x<sequencia;x++){
			printf("\n________________________________\n");
			printf("\nCódigo: %d", produtos[x].codigo);
			printf("\nNome: %s", produtos[x].nome);
			printf("\nValor: %0.2lf", produtos[x].valor);
			printf("\nEstoque: %d\n", produtos[x].estoque);
		}
	}else {
		printf("\nNão há produtos cadastrados.\n");
	}
	system("pause");
}

//5 - função de venda
venda(){
	int codigo,x,continuar, quantidade, achou=0, op;
	double total, subtotal;
	do{
		system("cls");
		printf("\nDigite o código do produto: ");
		scanf("%d", &codigo);
		for(x=0;x<sequencia;x++){
			if(produtos[x].codigo==codigo){
				printf("\nProduto: %s", produtos[x].nome);
				printf("\nDigite a quantidade do produto: ");
				scanf("%d", &quantidade);
				if(produtos[x].valor>0 && produtos[x].estoque>=quantidade){
					subtotal=quantidade*produtos[x].valor;
					produtos[x].estoque-=quantidade;
					printf("\nSubtotal da venda: %0.2lf", subtotal);
					printf("\nDeseja lançar mais um produto? ");
					printf("\nDigite 1 - sim | 2 - não\n ");
					scanf("%d", &continuar);
					achou=1;
					break;
				}else {
					printf("\nEstoque atual: %d", produtos[x].estoque);
					printf("\nProduto sem estoque para venda.\n");
					system("pause");
				}
			}else{
				achou=0;
			}
		}
		if(achou==0){
			printf("\nProduto não encontrado.");
		}
		total+=subtotal;
	}while(continuar!=2);
	printf("\nO valor total da venda é: %0.2lf\n", total);
	printf("\nForma de pagamento: ");
	printf("\n1 - à vista | 2 - prazo");
	printf("\nOpção: ");
	scanf("%d", &op);
	if(op==2){
		total=total*1.03;
		printf("\nValor a pagar: %0.2lf\n", total);
	}else{
		printf("\nValor a pagar: %0.2lf\n", total);
	}
	vendas[nvenda]=total;
	nvenda++;
	system("pause");
}

//6 - função de listar o registro de vendas
listaVendas(){
	int x;
	system("cls");
	if(vendas[0]>0){
		for(x=0;x<sequencia;x++){
			printf("\n________________________________\n");
			printf("\nVendas: %d: %0.2lf\n", x+1,vendas[x]);
		}
	}else {
		printf("\nNão há vendas realizadas.\n");
	}
	system("pause");
}

//principal
main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	do{
		system("cls");
		printf("\nDigite a opção desejada: ");
		printf("\n1 - cadastro do produto. ");
		printf("\n2 - entrada de estoque. ");
		printf("\n3 - ajuste de cadastro. ");
		printf("\n4 - lista todos os cadastros. ");
		printf("\n5 - venda. ");
		printf("\n6 - relatório de vendas.");
		printf("\nOpção: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				cadastrarProduto();
			break;
			case 2:
				entradaEstoque();
			break;
			case 3:
				ajusteCadastro();
			break;
			case 4:
				listaTodos();
			break;
			case 5:
				venda();
			break;
			case 6:
				listaVendas();
			break;
			default:
				printf("\nOpção inválida.\n");
				system("pause");
		}
	}while(opcao!=0);
	return 0;
}
