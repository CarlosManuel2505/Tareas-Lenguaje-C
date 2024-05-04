#include <stdio.h>
//  Haciendo uso del ciclo do while, quiero imprimir números del 1 al 10 y sacar
//	el promedio solo de los números que son pares que se encuentran del 1 al
//	10, por lo cual en consola voy a tener que imprimir los números del 1 al 10 y
//	el promedio de los pares, así como los pares que use para poder sacar el
//	promedio.
int main(int argc, char *argv[]) {
	
	int i,spares,contador,prom;
	i=1;
	spares=0;
	contador=0;
	printf("La secuencia del 1 al 10 es:");
	do 
	{
		printf("\n%d ",i);
		if(i%2==0)
		{
			contador=contador+1;
			spares=spares+i;
		}
		i++;
	}
	while (i<=10);
	prom=spares/contador;
    printf("\nEl promedio de la suma de los pares es:\n%d", prom);
	printf("\nLos numeros pares usados para sacar el promedio son:\n");
	for (int c=2; c <=10; c +=2) 
	{
		printf("%d", c);
		printf("\n");
	}
	
	return 0;}	
	

