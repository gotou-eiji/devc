#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct projeto{
	char codigo;
	char titulo;
	char descricao;
	int ano;
	char gerente;
	char status;
};
struct projeto projetos{
	
};

main(){
	setlocale(LC_ALL, "Portuguese");
	int op; //op��o
	do{
		system("cls"); //limpa tela
		printf("\nDigite \n1 - cadastrar\n2 - imprimir todos os projetos\n3 - imprimir todos os projetos com status A FAZER\n4 - para imprimir todos os projetos com status FAZENDO\n5 - para imprimir todos os projetos com status CONCLU�DO\n6 - lsitagem a pensar");
		printf("\n_______________________________________________");
		printf("\nDigite a op��o desejada: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				//cadastrarProjeto();
			break;
			case 2:
				//todosProjetos();
			break;
			case 3:
				//porStatus();
			break;
			case 4:
				//porStatus();
			break;
			case 5:
				//porStatus();
			break;
			case 6:
				//a pensar;
			break;
			default:
				printf("\nOp��o inv�lida");
		}
	}while(op!=0);
	return 0;
}
