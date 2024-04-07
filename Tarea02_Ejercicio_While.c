#include <stdio.h>

int main(int argc, char *argv[]) {
	//Haciendo uso del ciclo while, quiero recorrer del 1 al 5, imprimir la secuencia
	//del 1 al 5 en consola, pero también quiero sumar solo los números pares que
	//se encuentran entre el 1 y 5
	int i,spares;
	i=1;
	spares=0;
	printf("La secuencia del 1-5 es:");
	while (i<=5){
	printf("\n%d ",i);
		if(i%2==0)
		{
			spares=spares+i;
		}
			i++;
	}
	printf("\nLa suma de los números pares es:\n%d ",spares);
		return 0;
}

