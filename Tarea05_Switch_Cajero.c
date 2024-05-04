#include <stdio.h>
    //Vamos a simular hacer un sistema de un cajero autom�tico, el cual tendr� un
	//men� con 3 opciones, la primera es la opci�n de retirar dinero, la segunda
	//opci�n es abonar dinero, la 3 es salir del programa, mi saldo inicial ser� de
	//$3000 mil pesos, quiero que mi men� se repita hasta que yo seleccione la
	//opci�n 3.
	//Adem�s de que en cada opci�n me debe de decir al final el saldo actual con el  que cuento en mi cuenta bancaria.
int main(int argc, char *argv[]) {
	
	float inicial,abonar,retirar;
	int opcion;
	inicial=3000.00;
		do {
		printf("Sistema de cajero autom�tico.");
		printf("\nBienvenido.");
		printf("\n�Qu� movimiento desea realizar.");
		printf("\n1.-Retirar.");
		printf("\n2.-Abonar.");
		printf("\n3.-Salir.\n");
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1:
		    {
				printf("\nIngrese la cantidad a retirar: ");
				scanf("%f", &retirar);
				if (retirar > inicial) 
				{
					printf("Saldo insuficiente.\n");
				} 
				else 
				{
					inicial-= retirar;
					printf("Se han retirado $%.2f. \nSu nuevo saldo es: $%.2f\n", retirar,inicial);
				}
			}
			break;
			case 2:
			{
			printf("\n�Cu�nto dinero deseas abonar a tu cuenta?\n");
			scanf("%f", &abonar);
			inicial += abonar;
			printf("Se han abonado $%.2f. \nSaldo actual es: $%.2f\n",abonar,inicial);
			}
			break;
			case 3:
		    {
			    printf(" Su saldo final es: $%.2f.\n", inicial);
			}
			break;
		    default:
			printf("Opci�n no v�lida.\n");
		    }
	} 
	while(opcion!=3);
	return 0;
}

