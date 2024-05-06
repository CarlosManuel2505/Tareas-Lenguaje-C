#include <stdio.h>
//Imagina que estás desarrollando un sistema de calificaciones para una escuela. Se
	//te pide que escribas un programa en C que tome como entrada la calificación
	//numérica de un estudiante en un examen y determine su calificación equivalente en
	//letra, según la siguiente escala:
	//• 90 o más: A
	//• 80 - 89: B
	//• 70 - 79: C
	//• 60 - 69: D
	// Menos de 60: F
	//El programa debe solicitar al usuario que ingrese la calificación numérica del
	//estudiante. Luego, debe determinar la calificación equivalente en letra utilizando
	//estructuras condicionales (if-else) y mostrarla al usuario.

int main(int argc, char *argv[]) {

	int n;
	
	printf("Ingresa la calificación del estudiante:\n");
	scanf("%d",&n);
	if (n<60)
	{
	printf("La calificación es F.");	
	}
	else if(n>=60 && n<=69)
	{
	printf("La calificación es D.");
	}
	else if(n>=70 && n<=79)
	{
		printf("La calificación es C.");
	}
	else if(n>=80 && n<=89)
	{
	printf("La calificación es B.");
	}
	else if(n>=90 && n<=100)
	{
	printf("\nLa calificación es A.");
	}
		return 0;
}

