#include <stdio.h>

//Escribe un programa en C que solicite al usuario que ingrese un n�mero del 1 al 7,
	//representando los d�as de la semana (por ejemplo, 1 para Lunes, 2 para Martes,
	//									 etc.). El programa debe utilizar un switch para imprimir el nombre del d�a
	//correspondiente al n�mero ingresado por el usuario.
	//Por ejemplo, si el usuario ingresa el n�mero 3, el programa deber�a imprimir
	//"Mi�rcoles".
	//Si el usuario ingresa un n�mero fuera del rango del 1 al 7, el programa debe imprimir
	//"N�mero de d�a inv�lido".

int main(int argc, char *argv[]) {
	int opc;
	printf("Men� de d�as de la semana.");
	printf("\n1.-Lunes.");
	printf("\n2.-Martes.");
	printf("\n3.-Miercoles.");
	printf("\n4.-Jueves.");
	printf("\n5.-Viernes.");
	printf("\n6.-Sabado.");
	printf("\n7.-Domingo.");
	printf("\nIngresa un n�mero de acuerdo al menu mostrado.\n");
	scanf("%d",&opc);
	switch(opc){
	case 1:
		printf("Lunes.");
		break;
	case 2:
		printf("Martes.");
		break;
	case 3:
		printf("Miercoles.");
		break;
	case 4:
		printf("Jueves.");
		break;
	case 5:
		printf("Viernes.");
		break;
	case 6:
		printf("Sabado.");
		break;
	case 7:
		printf("Domingo.");
		break;
	default:
		printf("N�mero de d�a inv�lido.");
	}
	return 0;
}

