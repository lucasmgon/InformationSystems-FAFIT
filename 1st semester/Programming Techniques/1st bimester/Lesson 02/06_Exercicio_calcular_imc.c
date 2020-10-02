#include <stdio.h>
#include <math.h>

int main(){
	float peso, altura, imc;
	
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe sua altura ");
	scanf("%f", &altura);
	
	imc = peso / pow(altura, 2);
	
	printf("Seu IMC e %.2f", imc);
	
	getch();
	return 0;
}
