#include <stdio.h>
//Imagina que est�s desarrollando un sistema de calificaciones para una escuela. Se
	//te pide que escribas un programa en C que tome como entrada la calificaci�n
	//num�rica de un estudiante en un examen y determine su calificaci�n equivalente en
	//letra, seg�n la siguiente escala:
	//� 90 o m�s: A
	//� 80 - 89: B
	//� 70 - 79: C
	//� 60 - 69: D
	// Menos de 60: F
	//El programa debe solicitar al usuario que ingrese la calificaci�n num�rica del
	//estudiante. Luego, debe determinar la calificaci�n equivalente en letra utilizando
	//estructuras condicionales (if-else) y mostrarla al usuario.

int main(int argc, char *argv[]) {

	int n;
	
	printf("Ingresa la calificaci�n del estudiante:\n");
	scanf("%d",&n);
	if (n<60)
	{
	printf("La calificaci�n es F.");	
	}
	else if(n>=60 && n<=69)
	{
	printf("La calificaci�n es D.");
	}
	else if(n>=70 && n<=79)
	{
		printf("La calificaci�n es C.");
	}
	else if(n>=80 && n<=89)
	{
	printf("La calificaci�n es B.");
	}
	else if(n>=90 && n<=100)
	{
	printf("\nLa calificaci�n es A.");
	}
		return 0;
}

