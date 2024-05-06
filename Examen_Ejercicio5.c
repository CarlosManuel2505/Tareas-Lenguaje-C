#include <stdio.h>
//Escribe un programa en C en donde tenemos un arreglo de 5 posiciones de los cuales
//son tiene los elementos 23,4,1,44,55 y si la suma de los elementos da un numero par que
//ordene el método de forma ascendente, pero si la suma da un numero impar ordene los
//números de forma descendente
int main(int argc, char *argv[]) {
	
	int arreglonumeros[5]={23,4,1,44,55};
	
	int suma;
	suma=0;
	
	for (int i=0; i<5; i++){
		suma=suma+arreglonumeros[i];
	}
	printf("\n\nLa suma del arreglo de numeros es: %d\n",suma);
	if (suma%2==0){
		int arreglonumeros[5]={23,4,1,44,55};
		int a,b,temp;
	for (a=0; a<5; a++){
		for(b=0; b<5; b++){
			if(arreglonumeros[b]>arreglonumeros[b+1]){
				temp=arreglonumeros[b];
				arreglonumeros[b]=arreglonumeros[b+1];
				arreglonumeros[b+1]=temp;	
			}
		}
	printf("\n\nLa suma de los números es un número par.\n");
	printf("\nEl orden correcto de los números es:");
	for (a=0; a<5; a++){
	printf("\n%d",arreglonumeros[a]);
	}
	}
	}
	else{
		int arreglonumeros[5]={23,4,1,44,55};
		int a,b,temp;
	for (a=0; a<5; a++){
		for(b=0; b<5; b++){
			if(arreglonumeros[b]<arreglonumeros[b+1]){
			    temp=arreglonumeros[b];
				arreglonumeros[b]=arreglonumeros[b+1];
				arreglonumeros[b+1]=temp;	
				}
		}
	}
		printf("\nLa suma de los números es un número par.\n");
		printf("\nEl orden correcto de los números es:\n");
		for (a=0; a<5; a++){
		printf("\n%d", arreglonumeros[a]);
	}
	}
	return 0;
}

