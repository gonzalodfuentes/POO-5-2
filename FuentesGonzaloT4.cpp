#include<stdio.h>

int main()
{
	int menuopcion, a, b;
	
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
			else
			{
				printf("El %d no es bisiesto.", a);
			}
		}
		
		
		// 2
		case 2:
		{
			float n;
			
			printf("Ingrese un numero: ");
			scanf("%f", &n);
			
			if(n > 0)
			{
				printf("Es positivo.");
			}
			else if(n == 0)
			{
				printf("Es 0, entero.");
			}
			else
			{
				printf("Es negativo.");
			}
		}
		
		
		// 3
		case 3:
		{
			int pre, ent;
			
			printf("Cuanto salen las entradas?: ");
			scanf("%d", &pre);
			
			printf("Cuantas entradas quiere la persona?: ");
			scanf("%d", &ent);
			
			if(ent == 1)
			{
				printf("Debera pagar %d por la entrada. Sin descuento", pre);
				break;
			}
			else if(ent == 2)
			{
				pre += 10 * pre / 100;
				printf("Debera pagar %d por las entradas. Con 10%% de descuento.", pre);
				break;
			}
			else if(ent == 3)
			{
				pre += 15 * pre / 100;
				printf("Debera pagar %d por las entradas. Con 15%% de descuento.", pre);
				break;
			}
			else if(ent == 4)
			{
				pre += 16 * pre / 100;
				printf("Debera pagar %d por las entradas. Con 20%% de descuento.", pre);
				break;
			}
			else
			{
				printf("Invalido.");
				break;
			}
		}
		
		
		// 4
		case 4:
		{
			int p, cant;
			
			printf("Cuantas personas son?: ");
			scanf("%d", &p);
			
			if(p > 200 && p <= 300)
			{
				cant = p * 5500;
			}
			else if(p > 300)
			{
				cant = p * 4500;
			}
			else
			{
				cant = p * 6500;
			}
			
			printf("Va tener que pagar por plato/persona, unos $%d pesos.", cant);
		}
		
		
		// 5
		case 5:
		{
			int ti, ta, pr, ki, uva;
			
			printf("De que tipo es la uva que usted entrega? (1- A || 2- B): ");
			scanf("%d", &ti);
			
			printf("Y de que tamano? (1- 1 || 2- 2): ");
			scanf("%d", &ta);
			
			if(ti == 1 && ta == 1)
			{
				pr = 200;
			}
			else if(ti == 1 && ta == 2)
			{
				pr = 300;
			}
			else if(ti == 2 && ta == 1)
			{
				pr = 300;
			}
			else if(ti == 2 && ta == 2)
			{
				pr = 500;
			}
			else
			{
				printf("Invalido");
			}
			
			printf("Finalmente cuantos kilos de uva vendera?: ");
			scanf("%d", &ki);
			
			uva = ki * pr;
			
			printf("Vas a recibir $%d.", uva);
		}
	}
}
