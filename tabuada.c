#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero;
int contador=0;

int main(int argc, char *argv[]) 
{
	printf("tabuada\n\n");
	printf("digite o numero da tabuada: ");
	scanf("%d", &numero);
	
	for(contador=0;contador<=10; contador++)
	
	printf("%d X %d = %d\n", numero, contador, numero*contador);

	system("pause");
	return 0;
}
