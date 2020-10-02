#include <stdio.h>

int main(){
	int anoNascimento;
	
	printf("Informe seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	anoNascimento = 2016 - anoNascimento;
	
	printf("Voce tem %d anos.", anoNascimento);
	
	getch();
	return 0;
}
