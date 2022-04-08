#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//funções
struct pessoa{
	char cpf[20];
	char nome[100];
	char sexo[1];
	int idade;
};
struct pessoa paciente;
cadastro_paciente(){
	printf("\nPor favor, digite seu CPF: "); //primeira parte
	scanf("%s", &paciente.cpf);
	fflush(stdin);
	printf("\nDigite seu nome: ");
	gets(paciente.nome);
	printf("\nDigite sua idade: ");
	scanf("%d", &paciente.idade);
	printf("\nInforme o seu sexo: ");
	scanf("%s", &paciente.sexo);
	
	system("cls"); //limpa a tela
	
	printf("Confira seus dados: \n"); //segunda parte
	printf("CPF: %s\n", paciente.cpf);
	printf("Nome: %s\n", paciente.nome);
	printf("Idade: %d\n", paciente.idade);
	printf("Sexo: %s\n", paciente.sexo);
}
//principal
main(){
	setlocale(LC_ALL, "Portuguese");
	cadastro_paciente();
	
	
	return 0;
}

