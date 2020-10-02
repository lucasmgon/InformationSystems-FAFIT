#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Calcular o valor total de combustível abastecido.*/

int main(){
	float precoCombustivel, litros, total;
	setlocale(LC_ALL, "Portuguese");	
	system("color 17");
	
	printf("Informe o preço do combustível: ");
	scanf("%f", &precoCombustivel);
	
	printf("Informe a quantidade (Litros) abastecido: ");
	scanf("%f", &litros);
	
	total = precoCombustivel * litros;
	
	system("clear || cls");
	
	printf("\t------------- CUPOM FISCAL -------------\n\n"
			"\tCombustivel: %.2f Litros \tR$ %.2f\n\n"
			"\tTOTAL ------------------------> R$ %.2f",
			litros, precoCombustivel, total);
	
	getch();
	return 0;
}
