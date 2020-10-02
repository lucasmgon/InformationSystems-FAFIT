#include <stdio.h>

int main(){
	int n;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	printf("A raiz quadrada de %d e %d", n,(int)sqrt(n));
	
	getch();
	return 0;
}
