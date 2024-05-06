#include <stdio.h>
int main(int argc, char *argv[]) {
	
	int n,i;
	
	printf("Ingresa un número entero positivo:");
	scanf("%d",&n);
	printf("La secuencia de numeros del 1 al %d es:",n);
	for(i=1; i<=n; i++)
	{
	printf("\n%d",i);
	}
	return 0;
}

