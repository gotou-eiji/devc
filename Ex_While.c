#include <stdio.h>

int main(){
	float nota;
	
	printf("Digite uma nota de 0 a 10 (-1 para sair): \n");
	scanf("%f", &nota);
	
	while(nota != -1){
		if(nota>=7){
			printf("Aprovado\n");
		}else{
			printf("Reprovado\n");
		}
		
		scanf("%f", &nota);
	}
	
	printf("Programa finalizado!");
}
