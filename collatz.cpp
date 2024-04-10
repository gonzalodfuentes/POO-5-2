#include<stdio.h>

int main()
{
	int c, n;
	
	printf("Conjetura de Collatz: ingrese un numero: ");
	scanf("%d", &n);
	
	c = n;
	
	if (n == 1)
	{
		printf("Ya es 1");
		
		return 0;
	}
	
	do
	{
		printf("%d\n", n);
		
		if ((n % 2) == 0)
		{
			n = n / 2;
		}
		else if ((n % 2) != 0)
		{
			n = n * 3 + 1;
		}
		
		if (n == 1)
		{
			printf("Listo, %d dio 1", c);
		}
	}
	while (n != 1);
}
