#include <stdio.h>

int main(){
	int a = 5, b = 2;
	float resp = 0;
	
	//Retorna 0, pois a variável resp é ponto flutuante
	resp = a - b;
	printf("%d = %d = %d\n\n", a, b, resp);
	
	//Typecast
	resp = a - b;
	printf("%d = %d = %d\n\n", a, b, (int)resp);
	
	resp = (float)a / b;
	printf("%d / %d = %d\n\n", a, b, (int)resp);
	
	resp =+ 3;
	printf("%d / %d = %.2f\n\n", a, b, resp);
	
	resp = a * b;
	printf("%d * %d = %.2f\n\n", a, b, resp);
	
	resp = a % b;
	printf("%d %% %d = %.2f", a, b, resp);
	
	getch();
	return 0;
}
