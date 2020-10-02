#include <stdio.h>

int main(){
	int quantidadeCelular;
	float valorMedio;
	
	printf("Informe a quantidade de celulares: ");
	scanf("%d", &quantidadeCelular);
	
	printf("Informe o valor medio pago: ");
	scanf("%f", &valorMedio);
	
	printf("\n\nVoce tem %d celulares e pagou R$ %.2f.",
			quantidadeCelular, quantidadeCelular * valorMedio);
	
	getch();
	return 0;
}
