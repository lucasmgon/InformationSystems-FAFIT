/*Crie uma estrutura para representar as coordenadas de um ponto no plano
 *(posições X e Y). Emseguida, declare e leia do teclado dois pontos
 *e exiba a distância entre eles.*/

#include <stdio.h>
#include <math.h> //Definição da biblioteca matemática para usar sqrt e pow

typedef struct {
	float x;
	float y;
}Coordenadas;

int main() {
	Coordenadas pontoA, pontoB;

	printf("Digite o ponto A de X: ");
	scanf("%f", &pontoA.x);

	printf("Digite o ponto B de X: ");
	scanf("%f", &pontoB.x);

	printf("Digite o ponto A de Y: ");
	scanf("%f", &pontoA.y);

	printf("Digite o ponto B de Y: ");
	scanf("%f", &pontoB.y);

	float distancia = sqrt((pow(pontoA.x - pontoB.x, 2)) + (pow(pontoA.y - pontoB.y,2)));

	printf("A distancia entre o ponto A e ponto B e: %.2f\n", distancia);

	getchar();
	return 0;
}
