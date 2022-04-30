#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//função do exercício 8
void ordena();
int vet[5];

void ordena(){
    int i, j, aux;
    for( i=0; i<4; i++ ){
        for( j=i+1; j<4; j++ ){
            if( vet[i] > vet[j] ){
                aux    = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

main(){
setlocale(LC_ALL, "Portuguese");
//atividade 1
	int x, i, tam=20, idade, n, numero, valores, valor2, conta, resultado, media, num, maior, A[tam], t, ca=0, y=0;
	char nome[tam], sexo;
	double valor, valor1, soma;
	for(x=0;x<=200;x++){
		if((x%4)==0){
			printf("%d\n", x);
		}
	}
	printf("__________________________________________________________\n");
	system("pause");
	system("cls");
//atividade 2 
	printf("Digite um nome: ");
	gets(nome);
	for(i=0; i<=3; i++){
    	printf("Letra %d: \%c\n", i+1, nome[i]);
	}
	printf("\n");
	printf("__________________________________________________________\n");
	system("pause");
	system("cls");
//atividade 3
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	printf("Seu sexo: M - Masculino | F - Feminino: ");
	scanf("%s", &sexo);
	if(idade >= 18 && sexo == 'm' || 'M'){
		printf("%s ALISTAMENTO\n", nome);
	}else {
		printf("NÃO ESTÁ APTO.\n");
	}
	printf("__________________________________________________________\n");
	system("pause");
	system("cls");
//atividade 4
	printf("Insira um número para a operação: ");
	scanf("%d",&n);
	if((n % 10)==0){
		printf("divisivel por 10 \n");
	}else if((n % 5)==0){
		printf("divisivel por 5 \n");
	}else if((n % 2)==0){
		printf("divisivel por 2 \n");
 	}else{
 		printf("Não divisível por nenhum destes.\n");
	}
	printf("__________________________________________________________\n");
	system("pause");
	system("cls");
//atividade 5
	printf("Digite sua idade para informar a classe eleitoral: ");
	scanf("%d",&idade);
		if(idade <16){
			printf("Não-eleitor\n");
		}else if(idade>=18 && idade<=65){
			printf("Eleitor obrigatório\n");
		}else if(idade>=16 && idade<=65){
			printf("Eleitor facultativo\n");
		}
		printf("__________________________________________________________\n");
		system("pause");
		system("cls");
//atividade 6
	printf("Digite dois valores para somar: ");
	scanf("%lf", &valor);
	scanf("%lf", &valor1);
	soma = valor + valor1;
	if(soma>=10){
		printf("Resultado: %0.2lf\n", soma);
	}else {
		printf("A soma é menor que 10.\n");
	}
	printf("__________________________________________________________\n");
	system("pause");
	system("cls");
//atividade 7
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	if(numero >= 20 && numero <= 80){
		printf("parabéns\n");
	}else {
		printf("tente outra vez\n"); 
	}
	printf("__________________________________________________________\n");
	system("pause");
	system("cls");
//atividade 8
	printf("Digite quatro números inteiros: ");
	for (i=0; i<4; i++){
        scanf("%d", &vet[i]);
    }
    ordena();
    for (i=0; i<4; i++){
        printf("Valores ordenados: %d \n", vet[i]);
    }
    printf("\n");
	printf("__________________________________________________________\n");
    system("pause");
    system("cls");
//atividade 9
	conta = 0;
    soma = 0;
    printf("Digite valores inteiros, digite -99 para encerrar: \n");
    while(1){
    	scanf("%d", &valor);
    if(valor ==- 99)
    break;
    conta = conta + 1;
    soma = soma + valor2;
    media = soma / float(conta);
  }
    printf("\n\n");
    printf("Quantidade de valores informados = %3d\n", conta);
    printf("Soma dos valores informados = %3d\n", soma);
    printf("Media dos valores informados = %6.2f", media);
//atividade 10
	printf("Solicite números de 1 - 4: ");
	scanf("%d", &valores);
	if(valores<1 || valores>4){
		printf("entrada inválida\n");
	}else{
		printf("%d", valores);
	}
	printf("__________________________________________________________\n");
    system("pause");
    system("cls");
//atividade 11
	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	while(num!=0){
		if(num > maior){
			maior = num;
			printf("Digite outro número (para encerrar digite 0): ");
			scanf("%d", &num);
		}
	}
 	printf("O maior número é: %d",maior);
 	printf("__________________________________________________________\n");
    system("pause");
    system("cls");
//atividade 12
	for(i=0; i<tam; i++){
	printf("Digite um numero: ", i+1);
    scanf("\n%d", &A[i]);     
  	}
  	for(i=0; i<tam; i++){
    	soma=soma+A[i];
  	}
  	for(i=0; i<tam; i++){
    	printf("\nA[%d] = %d", i+1, A[i]);
  	}
 	printf("\n\nSoma: %d\n\n", soma);
 	system("pause");
    system("cls");
//atividade 13
	printf("Digite seu nome: ");
	gets(nome);
	tam = strlen(nome);
	printf("Esse nome tem %d letras",tam);
	printf("__________________________________________________________\n");
    system("pause");
    system("cls");
//atividade 14
	printf("Informe um nome : ");
	gets(nome);
	t=strlen(nome);
	for (x=1; x <= t-1; x++){
	if(nome[x] == 'a' || nome[x] == 'A')
	ca++;
	}
	printf("\n O nome %s ",(nome));
	printf("tem %d letra a.",ca);
	printf("\n");
	printf("__________________________________________________________\n");
    system("pause");
    system("cls");
//atividade 15
	for(x=0;x<=9;x++){
 	vet[x]=y+2;
 	y=y+2;
 	}
 	for(x=0;x<=9;x++)
	 printf(" %d ",vet[x]);
 	printf("\n\n");
	return 0;
}
