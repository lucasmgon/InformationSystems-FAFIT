#include <stdio.h>

struct dadosAlunos {
	char nome[100];
	float media;
	int idade;
};

int main() {
	struct dadosAlunos dados;

	printf("Nome: ");
	fgets(dados.nome, 100, stdin);
	fflush(stdin);

	printf("Media: ");
	scanf("%f", &dados.media);
	fflush(stdin);

	printf("Idade: ");
	scanf("%d", &dados.idade);
	fflush(stdin);

	printf("%s\n%.2f\n%d", dados.nome, dados.media, dados.idade);
	
	getchar();
	return 0;
}
