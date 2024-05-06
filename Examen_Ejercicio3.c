#include <stdio.h>

//Escribe un programa en C que solicite al usuario que ingrese un número del 1 al 7,
	//representando los días de la semana (por ejemplo, 1 para Lunes, 2 para Martes,
	//									 etc.). El programa debe utilizar un switch para imprimir el nombre del día
	//correspondiente al número ingresado por el usuario.
	//Por ejemplo, si el usuario ingresa el número 3, el programa debería imprimir
	//"Miércoles".
	//Si el usuario ingresa un número fuera del rango del 1 al 7, el programa debe imprimir
	//"Número de día inválido".

int main(int argc, char *argv[]) {
	int opc;
	printf("Menú de días de la semana.");
	printf("\n1.-Lunes.");
	printf("\n2.-Martes.");
	printf("\n3.-Miercoles.");
	printf("\n4.-Jueves.");
	printf("\n5.-Viernes.");
	printf("\n6.-Sabado.");
	printf("\n7.-Domingo.");
	printf("\nIngresa un número de acuerdo al menu mostrado.\n");
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
		printf("Número de día inválido.");
	}
	return 0;
}

