#include <stdio.h>

int main(){
	int num = 10;
	
	//Pré-incremento
	printf("++num = %d\n\n", ++num);
	
	//Pós-incremento
	printf("num++ = %d\n\n", num++);
	printf("num = %d\n\n", num);
	
	//Pré-decremento
	printf("--num = %d\n\n", --num);
	
	//Pós-decremento
	printf("num-- = %d\n\n", num--);
	printf("num = %d", num);
	
	getch();
	return 0;	
}
