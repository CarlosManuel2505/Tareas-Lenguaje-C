#include <stdio.h>
	int ciclo(int fin){
	int impar;
	impar=0;
	for(int a=1; a<=fin; a++)
	{
		if (a%2 !=0)
	{
			impar+=a;
	}
	}
	return impar;
}
	int main(int argc, char *argv[])
	{
		int finciclo,i;
		printf("\nDame el valor con el cual terminara el ciclo: ");
		scanf("%d",&finciclo);
		printf("\nEl ciclo del 1 al %d es: ",finciclo);
		i=1;
		while (i<=finciclo){
			printf("\n%d ",i);
			i++;
		}
		int impar=ciclo(finciclo);
		printf("\nLa suma de los numeros impares del ciclo del 1 al %d es:\n%d",finciclo,impar);
		
		return 0;
	}
	
