#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1,n2,n3;
	printf("Ingresa un n�mero entero:\n ");
	scanf("%d",&n1);
	printf("Ingresa otro n�mero entero:\n ");
	scanf("%d",&n2);
	printf("Ingresa un �ltimo n�mero entero:\n ");
	scanf("%d",&n3);
	if (n1>n2 && n1>n3) 
	{
		printf("El n�mero mayor es:%d",n1);
	}
	else if(n2>n1 && n2>n3) 
	    {
			printf("El n�mero mayor es:%d",n2);
		}
	else if (n3>n1 && n3>n1)
		{
			printf("El n�mero mayor es:%d",n3);
		}
	else if (n1==0 && n2==0 && n3==0)
	{
		printf("Los tres n�meros son iguales y nulos.");
	}
	else if (n1==n2 && n2==n3)
	{
		printf("Los tres n�meros son iguales.");
	}
		return 0;
}

