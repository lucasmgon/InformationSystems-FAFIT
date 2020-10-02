#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
	
	printf("Informe a primeira nota: ");
	scanf ("%f", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	printf("A media das notas %.2f e %.2f é %.2f", n1, n2, media);
	
	getch();
	return 0;
}
