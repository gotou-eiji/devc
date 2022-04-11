#include <stdio.h>
main(){
	int numero;
	printf("digite um numero: ");
	scanf("%d",&numero);
	if((numero%10)==0){
		printf("e divisivel por 10");
	}if((numero%5)==0){
		printf("\ne divisivel por 5");
	}if((numero%2)==0){
		printf("\ne divisivel por 2");
	}if((numero%10)!=0 && (numero%5)!=0 && (numero%2)!=0){
		printf("\nnao e divisivel");
	}
	return 0;
}
