#include <stdio.h>
main(){
	float numero, media, soma;
	int x, qtde=0;
	for(x=1;x<=6;x++){
		scanf("%f", &numero);
		if(numero > 0){
			soma += numero;
			qtde++;
		}
	}
	media = soma / qtde;
	printf("%d valores positivos\n%0.1f\n", qtde, media);
	return 0;
}
