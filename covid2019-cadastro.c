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
int total_pontos,sintomas_pontos[10]={5,1,1,1,3,10,1,1,10,3};
char sintomas_descricao[10][200]={"Tem febre?","Tem dor de cabeça?","Tem secreção nasal ou espirros?","Tem dor ou irritação na garganta?","Tem tosse seca?","Tem dificuldade respiratória?","Tem dores no corpo?","Tem diarréia?","Esteve em contato nos últimos 14 dias com alguém positivado com COVID-19?","Esteve em locais com aglomeração?",};
cadastro_paciente(){
	printf("\nPor favor, digite seu CPF: "); //primeira parte
	scanf("%s", &paciente.cpf);
	fflush(stdin); //limpa o cache
	printf("\nDigite seu nome: ");
	gets(paciente.nome);
	printf("\nDigite sua idade: ");
	scanf("%d", &paciente.idade);
	printf("\nInforme o seu sexo: ");
	scanf("%s", &paciente.sexo);
	system("pause");
	system("cls"); //limpa a tela
	printf("Confira seus dados: \n"); //segunda parte
	printf("CPF: %s\n", paciente.cpf);
	printf("Nome: %s\n", paciente.nome);
	printf("Idade: %d\n", paciente.idade);
	printf("Sexo: %s\n", paciente.sexo);
}
//questionário
questionario(){
	int x=0;
	char resposta;
	total_pontos=0;
	while(x<10){
		printf("\n%s S-sim N-não", sintomas_descricao[x]);
		fflush(stdin); // limpa o cache
		scanf("%c", &resposta);
		if(resposta == 's' || resposta == 'S'){
			total_pontos += sintomas_pontos[x];
			x++;
		}else if(resposta == 'n' || resposta == 'N'){
			x++;
		}else{
			printf("\nValor inválido, digite novamente...");
		}
	}
}
//principal
main(){
	setlocale(LC_ALL, "Portuguese");
	do{
		cadastro_paciente();
		if(paciente.cpf!=0){
			system("cls");
			questionario();
			system("cls");
			printf("\nO total de pontos foi %d",total_pontos);
			if(total_pontos<=9){
				printf("\nEncaminhe-se para a ala de RISCO BAIXO\n");
			}else if(total_pontos>=20){
				printf("\nEncaminhe-se para a ala de RISCO ALTO\n");
			}else{
				printf("\nEncaminhe-se para a ala de RISCO MÉDIO\n");
			}
			system("pause");
			system("cls");
		}else{
			break;
			system("cls");
		}
	}while(paciente.cpf!=0);
	return 0;
}
