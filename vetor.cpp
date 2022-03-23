#include <stdio.h>
main(){
	int x,num=1,soma,tamanho;
	printf("digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	int vetor[tamanho];
	for(x=0;x<tamanho;x++){
		printf("digite o numero %d: " ,x+1);
		scanf("%d", &vetor[x]);
	}for(x=0;x<tamanho;x++){
		soma=soma+vetor[x];
	}
	int y, aux;
	for(x=0;x<tamanho;x++){
		for(y=0;y<tamanho;y++){
			if(vetor[x]<vetor[y]){
				aux=vetor[x];
				vetor[x]=vetor[y];
				vetor[y]=aux;
			}
			
		}
	}
	
	for(x=0;x<tamanho;x++){
		printf("posicao %d = [%d]\n",x,vetor[x]);
	}
	printf("soma das posicoes: %d",soma);
	return 0;
}
