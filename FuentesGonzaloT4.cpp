#include<stdio.h>

int main()
{
	int menuopcion;
	
	printf(" 1. Es bisiesto? \n 2. Entero y/o positivo? \n 3. Pago de entradas \n 4. Catering \n 5. Vinicultores\n");
	
	printf("Que opcion elige?: ");
	scanf("%d", &menuopcion);
	
	switch(menuopcion)
	{
		// 1
		case 1:
		{
			int a;
			
			// Ingresar el año
			printf("Cual desea averiguar si es bisiesto o no?: ");
			scanf("%d", &a);
			
			
			// Condicionales para saber si el año es bisiesto
			if((a % 4) == 0 && (a % 100) != 0)
			{
				// Divisible por 4 pero no por 100
				printf("El %d es bisiesto.", a);
			}
			else if((a % 4) != 0)
			{
				// No divisible por 4
				printf("El %d no es bisiesto.", a);
			}
			else if((a % 400) == 0 && (a % 100) == 0)
			{
				// Divisible por 400 y divisible por 100
				printf("El %d es bisiesto.", a);
			}
			else
			{
				// Ninguna de las anteriores
				printf("El %d no es bisiesto.", a);
			}
			
			break;
		}
		
		
		// 2
		case 2:
		{
			float n;
			int i;
			
			printf("Ingrese un numero: ");
			scanf("%f", &n);
			
			// Condicionales
			if(n > 0)
			{
				printf("Es positivo.");
			}
			else if(n == 0)
			{
				printf("Es 0, entero.");
				
				// Retorna todo
				return 0;
			}
			else
			{
				// Ninguna de las anteriores
				printf("Es negativo.");
			}
			
			// Ciclo que se repite infinitamente para saber si es decimal o entero
			for(i = 0; 0 < 1; i++)
			{
				
				if(n > 0)
				{
					// Lo resta constantemente
					n -= 1;
				}
				else if(n < 0)
				{
					// Lo suma constantemente
					n += 1;
				}
				
				if(n >= 0 && n < 1)
				{
					// Una vez el numero sea 0 o este entre 0 y 1 se cierra el ciclo solo
					break;
				}
			}
			
			
			// Condicional de si es igual a 0 es entero, sino, decimal
			if(n == 0)
			{
				printf("\nEs entero.");
			}
			else
			{
				printf("\nEs decimal.");
			}
			
			break;
			
		}
		
		
		// 3
		case 3:
		{
			int pre, ent;
			
			// Precio y personas
			printf("Cuanto salen las entradas?: ");
			scanf("%d", &pre);
			
			printf("Cuantas entradas quiere la persona?: ");
			scanf("%d", &ent);
			
			
			// Condicionales para saber su descuento
			if(ent == 1)
			{
				printf("Debera pagar %d por la entrada. Sin descuento", pre);
				break;
			}
			else if(ent == 2)
			{
				pre = 90 * pre / 100;
				printf("Debera pagar %d por las entradas. Con 10%% de descuento.", pre);
				break;
			}
			else if(ent == 3)
			{
				pre = 85 * pre / 100;
				printf("Debera pagar %d por las entradas. Con 15%% de descuento.", pre);
				break;
			}
			else if(ent == 4)
			{
				pre = 80 * pre / 100;
				printf("Debera pagar %d por las entradas. Con 20%% de descuento.", pre);
				break;
			}
			else
			{
				// Si ingresa 0 o +5
				printf("Invalido.");
				break;
			}
			
			break;
		}
		
		
		// 4
		case 4:
		{
			int p, cant;
			
			// Cantidad de personas
			printf("Cuantas personas son?: ");
			scanf("%d", &p);
			
			// Condicionales para saber cuanto van a pagar en total
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
			
			// Precio
			printf("Va tener que pagar por plato/persona, unos $%d pesos.", cant);
			
			break;
		}
		
		
		// 5
		case 5:
		{
			int ti, ta, pr, ki, uva, i, precio;
			
			// Los kilos que va a vender
			printf("Cuantos kilos vas a vender?: ");
			scanf("%d", &ki);
			
			// Ciclo que se repite por cantidad de kilos que venda
			for(i = 0; i < ki; i++)
			{
				// El tipo de uva y su tamaño
				printf("De que tipo es la uva que usted entrega del kilo %d? (1- A || 2- B): ", i+1);
				scanf("%d", &ti);
			
				printf("Y de que tamano? (1- 1 || 2- 2): ");
				scanf("%d", &ta);
			
				// Condicionales que determinan su precio
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
					// Por si ingresa 0 o +3 en algunas de las 2 preguntas anteriores
					printf("Invalido");
				}
			
				// Acumula el precio de cada kilo una vez termine de pasarlos a todos
				precio += pr;
				
				pr = 0;
			}
			
			// Lo que va a recibir de la venta
			printf("Vas a recibir $%d.", precio);
			
			break;
		}	
	}
}
