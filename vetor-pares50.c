#include <stdio.h>
main(){
	int x,num=1,soma;
	const int tamanho=50;
	int vetor[tamanho];
	for(x=0;x<tamanho;x++){
		vetor[x]=num;
		num++;
	}
	for(x=0;x<tamanho;x++){
		if((vetor[x]%2)==0){
			printf("posicao %d = [%d]\n",x,vetor[x]);
		}
	}
	return 0;
}
