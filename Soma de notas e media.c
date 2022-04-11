#include <stdio.h>
#include <stdlib.h>
main(){
	int qtde;
	float nota1, nota2, media;
	system("cls");
	printf("digite a quantidade de alunos para somar as notas: \n");
	scanf("%d",&qtde);
	for(int x=1;x<=qtde;x++){
		printf("\ndigite a primeira nota do aluno:\n%d",x);
			scanf("%f",&nota1);
		printf("\ndigite a segunda nota do aluno: \n%d",x);
			scanf("%f",&nota2);
		media=(nota1+nota2)/2;
		if(media>=7){
			printf("\naprovado\n");
		}else {
			printf("\nreprovado\n");
		}
		printf("\na media do aluno e: %.2f",media);
		system("pause");
		nota1=0;
		nota2=0;
		system("cls");
	}
}
