#include <stdio.h>

float promedio(int a, int b) 
{
	return (float)(a + b)/2;
}
int main() 
{
	int N1, N2;
	char nombre[20];
	
	printf("Ingrese su nombre: ");
	scanf("%s", nombre);
	
	printf("Ingrese un n�mero entero: ");
	scanf("%d", &N1);
	printf("Ingrese otro n�mero entero: ");
	scanf("%d", &N2);
	
	float prom = promedio(N1, N2);
	
	printf(nombre);
	printf("\nLos n�meros que ingresaste son: %d y %d\n", N1, N2);
	printf("El promedio de los 2 n�meros es: %.2f\n", prom);
	
	return 0;
}

