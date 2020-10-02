#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float nota1, nota2, nota3, peso1, peso2, peso3, mediaFinal;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a 1º nota e o 1º peso: ");
	scanf("%f%f", &nota1, &peso1);
	
	printf("Informe a 2º nota e o 2º peso: ");
	scanf("%f%f", &nota2, &peso2);
	
	printf("Informe a 3º nota e o 3º peso: ");
	scanf("%f%f", &nota3, &peso3);
	
	system("clear || cls");
	
	mediaFinal = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
	
	printf("Nota\t Peso\n"
			"%.2f\t %.2f\n"
			"%.2f\t %.2f\n"
			"%.2f\t %.2f\n"
			"Media final: %.2f",
			nota1, peso1, nota2, peso2, nota3, peso3, mediaFinal);
	
	getch();
	return 0;
}
