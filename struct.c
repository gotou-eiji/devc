#include <stdio.h>
struct funcionario{
	int codigo;
	char nome[100];
	double salario;
};
struct funcionario funcionarios[4];
main(){
	int x;
	for(x=0;x<3;x++){
		scanf("%d" ,&funcionarios[x].codigo);
		scanf("%s" ,&funcionarios[x].nome);
		scanf("%lf" ,&funcionarios[x].salario);
	}
	printf ("\nganham mais que 3000\n");
	for(x=0;x<3;x++){
		if(funcionarios[x].salario>3000){
			printf("%d\n" ,funcionarios[x].codigo);
			printf("%s\n" ,funcionarios[x].nome);
			printf("%lf\n" ,funcionarios[x].salario);
		}
	}
	return 0;
}
