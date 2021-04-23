/*Crie uma estrutura chamada Retangulo. Essa estrutura deverá conter o
 *ponto superior esquerdoe o ponto inferior direito do retângulo.
 *Cada ponto é definido por uma estrutura Ponto, criadano exercício
 *anterior. Faça um programa que declare e leia uma estrutura
 *Retangulo e exiba a área, o comprimento da diagonal e o perímetro desse retângulo.*/

#include <stdio.h>
#include <math.h> //Definição da biblioteca matemática para usar sqrt e pow

typedef struct {
	float x;
	float y;
}Coordenadas;

typedef struct {
	Coordenadas pontoA, pontoB;
}Retangulo;

int main() {
	Retangulo pontoS, pontoI;

	printf("Digite o ponto A de X: ");
	scanf("%f", &pontoS.pontoA.x);

	printf("Digite o ponto B de X: ");
	scanf("%f", &pontoI.pontoB.x);

	printf("Digite o ponto A de Y: ");
	scanf("%f", &pontoS.pontoA.y);

	printf("Digite o ponto B de Y: ");
	scanf("%f", &pontoI.pontoB.y);

	float distancia = sqrt((pow(pontoS.pontoA.x - pontoI.pontoB.x, 2)) + (pow(pontoS.pontoA.y - pontoI.pontoB.y, 2)));

	float area = ((pontoS.pontoA.x - pontoI.pontoB.x) * (pontoS.pontoA.y - pontoI.pontoB.y));

	float diagonal = sqrt(pow(pontoS.pontoA.x - pontoI.pontoB.x, 2) + pow(pontoS.pontoA.y - pontoI.pontoB.y, 2));

	printf("A distancia entre o ponto A e ponto B e: %.2f\n", distancia);
	printf("A area do retangulo eh: %.2f\n", area);
	printf("A comprimento da diagonal eh: %.2f\n", diagonal);

	getchar();
	return 0;
}
