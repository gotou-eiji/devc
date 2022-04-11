#include <stdio.h>

int soma(int n1, int n2){
	int somar;
	somar = n1 + n2;
	return somar;
}
int subtracao(int num1, int num2){
	int sub;
	sub = num1 - num2;
	return sub;
}
int divisao(int numero1, int numero2){
	int divi;
	divi = numero1 / numero2;
	return divi;
}
int multiplicacao(int number1, int number2){
	int multi;
	multi = number1 * number2;
	return multi;
}
main(){
	int n1, n2, opcao, resultado;
	printf("digite dois numeros, em seguida digite: 1 - soma; 2 - subtracao; 3 - divisao; 4 - multiplicacao\n\n");
	scanf("%d %d %d" ,&n1,&n2,&opcao);
	if(opcao == 1){
		resultado = soma(n1, n2);
	}else if(opcao == 2){
		resultado = subtracao(n1, n2);
	}else if(opcao == 3){
		resultado = divisao(n1, n2);
	}else if(opcao == 4){
		resultado = multiplicacao(n1, n2);
	}
	printf("o resultado da operacao e: %d" ,resultado);
	return 0;
}
