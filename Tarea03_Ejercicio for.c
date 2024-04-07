#include <stdio.h>

int main(int argc, char *argv[]) {
	//Haciendo uso del ciclo for quiero imprimir las tablas de multiplicar, pero le
	//	voy a solicitar al usuario que numero quiero para la tabla de multiplicar, una
	//	vez dado el numero de la tabla, imprimir la tabla de multiplicar en consola
	int i,n;
	printf("Tablas de multiplicar.");
	printf("\nIngresa el número de la tabla que desees: "); 
	scanf("%d",&n);
	printf("\nLa tabla de multiplicar del %d es: ",n);
	for(i=1; i<=10; i++){
		printf("\n %d x %d = %d",n,i,n*i);
			}
	
	return 0;
}

