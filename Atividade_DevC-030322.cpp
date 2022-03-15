#include <stdio.h>
int valor1, valor2, opcao, soma;
float val1, val2, resultado, soma1, media;
//atividade 1, 2 e 3
int main(){
	printf("hello world\n\n");
	printf("digite o primeiro numero para aparecer: ");
		scanf("%d" ,&valor1);
	if(valor1 > 50 ){
		valor2=valor1/2;
		printf("%d" ,valor2);
	}
//atividade 4
	printf("\ndigite o primeiro valor para somar: ");
		scanf("%d" ,&valor1);
	printf("digite o segundo valor: ");
		scanf("%d" ,&valor2);
			soma=valor1+valor2;
				if(soma > 35){
					printf("resultado da soma e: %d" ,soma);
				}
//atividade 5
	printf("\ndigite primeiro numero para calcular a media: " );
		scanf("%f" ,&val1);
	printf("digite segundo numero:" );
		scanf("%f" ,&val2);
			soma1=val1+val2;
			media=soma1/2;
				printf("a media dos valores e: %f", media);
//atividade6
	printf("\ndigite um valor: ");
		scanf("%f" ,&val1);
			if(val1>20){
				printf("o valor digitado e maior que 20");
			}if(val1==20){
				printf("o valor digitado e igual a 20");
			}if(val1<20);{
				printf("o valor digitado e menor que 20");
			}
//atividade 7, 8, e 9
	printf("\ndigite o primeiro valor para somar: ");
		scanf("%f" ,&val1);
	printf("digite o segundo valor: ");
		scanf("%f" ,&val2);
			soma=val1+val2;
				printf("o resultado da soma e: %d" ,soma);
	printf("\ndigite o primeiro valor para subtrair: ");
		scanf("%f" ,&val1);
	printf("digite o segundo valor: ");
		scanf("%f" ,&val2);
			soma=val1-val2;
				printf("o resultado da subtracao e: %d" ,soma);
	printf("\ndigite o primeiro valor para dividir: ");
		scanf("%f" ,&val1);
	printf("digite o segundo valor: ");
		scanf("%f" ,&val2);
			soma=val1/val2;
				printf("o resultado da divisao entre os dois valores e: %d" ,soma);
//atividade 10
	printf("\ndigite o primeiro valor: ");
		scanf("%f" ,&val1);
	printf("digite o segundo valor: ");
		scanf("%f" ,&val2);
	printf("digite a operacao desejada: 1-soma 2-subtracao 3-divisao 4-multiplicacao");
		scanf("%d",&opcao);
			if(opcao==1){
				resultado=val1+val2;
			}else if(opcao==2){
				resultado=val1-val2;
			}if(opcao==3){
				resultado==val1/val2;
			}else if(opcao==4){
				resultado==val1*val2;
			}
			printf("o resultado da operacao e: %.2f" ,resultado);
//atividade 11 e 12
	printf("\ndigite o primeiro valor para transformar graus celsius para farenheit: ");
		scanf("%f" ,&val1);
			resultado= val1 * 1.8 + 32;
				printf("a temperatura e: %f" ,resultado);
	printf("\ndigite o primeiro valor para transformar graus farenheit para celsius: ");
		scanf("%f" ,&val1);
			resultado= val1 / 1.8 - 32;
				printf("a temperatura e: %f" ,resultado);
}







