#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*A média geométrica é apropriadamente calculada nos casos em que um
total é o resultado da multiplicação de seus elementos.*/

int main(){
	float n1, n2, n3, resultado;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Informe o terceiro numero: ");
	scanf("%f", &n3);
	
	resultado = pow(n1 * n2 * n3, (float)1/3);
	
	system("clear || cls");
	
	printf("A media geometrica e: %.2f", resultado);
	
	getch();
	return 0;
}
