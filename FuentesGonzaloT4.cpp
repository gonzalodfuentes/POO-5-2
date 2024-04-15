#include<stdio.h>

int main()
{
	int menuopcion;
	
	printf("Que opcion elige?: ");
	scanf("%d", &menuopcion);
	
	switch(menuopcion)
	{
		// 1
		case 1:
		{
			int a;
			
			printf("Cual desea averiguar si es bisiesto o no?: ");
			scanf("%d", &a);
			
			if((a % 4) == 0 && (a % 100) != 0)
			{
				printf("El %d es bisiesto.", a);
			}
			else if((a % 4) != 0)
			{
				printf("El %d no es bisiesto.", a);
			}
			else if((a % 400) == 0 && (a % 100) == 0)
			{
				printf("El %d es bisiesto.", a);
			}
		}
		
	}
}
