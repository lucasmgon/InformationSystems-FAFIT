#include <stdio.h>
#include <stdlib.h>

/*A média harmônica é uma medida de tendência central é definida como o
  número de elementosdividido pela soma dos seus recíprocos.*/

int main(){
	float n1, n2, n3, resultado;
	
	printf("Digite o primeiro numero decimal: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero decimal: ");
	scanf("%f", &n2);
	
	printf("Digite o terceiro numero decimal: ");
	scanf("%f", &n3);
	
	resultado = 3/((1/n1) + (1/n2) + (1/n3));
	
	system("clear || cls");
	
	printf("A media harmonica desses valores e: %.4f", resultado);
	
	getch();
	return 0;
}
