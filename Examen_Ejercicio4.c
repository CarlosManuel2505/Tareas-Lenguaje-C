#include <stdio.h>
//Escribe un programa en C que solicite al usuario ingresar un n�mero entero positivo.
	//El programa debe implementar una funci�n llamada esPar que reciba un n�mero
	//entero como argumento y no devuelva ning�n valor. Esta funci�n verificar� si el
	//n�mero dado es par o no.
	//El programa principal debe utilizar un ciclo do-while para solicitar al usuario que
	//ingrese un n�mero hasta que ingrese un n�mero par. Dentro del ciclo, llamar� a la
	//funci�n esPar para determinar si el n�mero ingresado es par o no. Si el n�mero es
	//par, el programa imprimir� "�N�mero par ingresado!" y terminar�; de lo contrario,
	//imprimir� "N�mero impar ingresado. Int�ntalo de nuevo".
	//La funci�n esPar debe verificar si el n�mero recibido como argumento es divisible
	//por 2. Si lo es, el n�mero se considera par; de lo contrario, es impar.				
void esPar(int a){
	if(a%2==0){
		printf("�N�mero par ingresado!");
	}
	else{
		printf("\n�N�mero impar ingresado.Int�ntalo de nuevo!");
	}
}
	

int main(int argc, char *argv[]) {
	int n;
	do {
		printf("\nIngresa un n�mero:");
		scanf("%d",&n);
		esPar(n);
	} while(n%2!=0);
	
	
	return 0;
}

