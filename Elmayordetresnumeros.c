#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1,n2,n3;
	printf("Ingresa un número entero:\n ");
	scanf("%d",&n1);
	printf("Ingresa otro número entero:\n ");
	scanf("%d",&n2);
	printf("Ingresa un último número entero:\n ");
	scanf("%d",&n3);
	if (n1>n2 && n1>n3) 
	{
		printf("El número mayor es:%d",n1);
	}
	else if(n2>n1 && n2>n3) 
	    {
			printf("El número mayor es:%d",n2);
		}
	else if (n3>n1 && n3>n1)
		{
			printf("El número mayor es:%d",n3);
		}
	else if (n1==0 && n2==0 && n3==0)
	{
		printf("Los tres números son iguales y nulos.");
	}
	else if (n1==n2 && n2==n3)
	{
		printf("Los tres números son iguales.");
	}
		return 0;
}

