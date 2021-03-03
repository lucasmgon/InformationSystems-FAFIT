#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int numero;
	char logradouro[50];
}Endereco;

typedef struct {
	int anoNasc;
	int diaNasc;
	char nome[50];
	Endereco endereco;
}Agenda;

Agenda agenda;

int main(){
	
	printf("Nome: ");
	fgets(agenda.nome, 50, stdin);
	fflush(stdin);
	
	printf("Dia nascimento: ");
	scanf("%d", &agenda.diaNasc);
	
	printf("Ano nascimento: ");
	scanf("%d", &agenda.anoNasc);
	
	printf("Logradouro: ");
	fgets(agenda.endereco.logradouro, 50, stdin);
	fflush(stdin);
	
	printf("Numero: ");
	scanf("%d", &agenda.endereco.numero);
	
	system("clear || cls");
	
	printf("Nome: %sDia Nascimento: %d\nAno Nascimento: %d\nLogradouro: %sNumero: %d",
	agenda.nome, agenda.diaNasc, agenda.anoNasc, agenda.endereco.logradouro, agenda.endereco.numero);
	
	getchar();
	return 0;
}
