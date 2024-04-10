#include<stdio.h>

int main()
{
	int menuopcion; 
	
	printf("Elija un numero (1/5): ");
	scanf("%d", &menuopcion);
	
	switch(menuopcion)
	{
		/* 1
		El director de una escuela está organizando un viaje de estudios, 
		y requiere determinar cuánto debe cobrar a cada alumno y cuánto debe pagar a la compañía de viajes por el servicio. 
		La forma de cobrar es la siguiente: 
		Si son 100 alumnos o más, el costo por cada alumno es de $ 500, de 50 a 99 alumnos, el costo es de $ 400  y  de 30 a 49, de $ 300. 
		Pero si son menos de 30, el costo del alquiler del micro es de $ 6000.- sin importar el número de alumnos. 
		Realice un algoritmo que permita determinar el pago por el alquiler del micro y lo que debe pagar cada alumno por el viaje.
		*/
		case 1:
		{
			int a, pm, c;
			
			printf("Cuantos alumnos son: ");
			scanf("%d", &a);
			
			if(a >= 100)
			{
				c = 500;
				pm = 500 * a;
			}
			else if(a >= 50 && a <= 99)
			{
				c = 400;
				pm = 400 * a;
			}
			else if(a >= 30 && a <= 49)
			{
				c = 300;
				pm = 300 * a;
			}
			else
			{
				printf("No habra costo por alumno y el alquiler del micro tendra un precio fijo de $6000.");
				pm = 6000;
				
				return 0;
			}
			
			printf("Va a pagar por cada alumno $%d y el costo de alquiler del micro en total van a ser %d pesos.", c, pm);
			
			break;
		}
		
		
		/* 2
		Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas, 
		el vendedor desea saber cuánto dinero obtendrá por concepto de comisiones por las tres ventas que realiza en el mes,
		y el total que recibirá en el mes tomando en cuenta su sueldo base y comisiones.
		*/
		case 2:
		{
			float s, v, a, c, t;
			int i;
			
			printf("Tu sueldo base?: ");
			scanf("%f", &s);
			
			for(i = 0; i < 3; i++)
			{
				printf("Cuanto ganaste en la venta %d?: ", i+1);
				scanf("%f", &v);
				
				a += v;
			}
			
			c = 10 * a / 100;
			
			t = s + c;
			
			printf("Por comisiones ganaste $%f.\nY en total (sueldo + comision) recibis $%f.", c, t);
			
			break;
		}
		
		
		/* 3
		Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. 
		Dicha calificación se compone de los siguientes porcentajes:
		55% del promedio de sus tres calificaciones parciales.
		30% de la calificación del examen final.
		15% de la calificación de un trabajo final.
		*/
		case 3:
		{
			float pa, ac, ef, tf, pr, cpa, cef, ctf, cfin;
			int i;
			
			for(i = 0; i < 3; i++)
			{
				printf("Nota del parcial %d: ", i+1);
				scanf("%f", &pa);
				
				ac = ac + pa;
			}
			
			printf("Nota del examen final: ");
			scanf("%f", &ef);
			
			printf("Nota del trabajo final: ");
			scanf("%f", &tf);
			
			pr = ac / 3;
			
			cpa = 55 * pa / 100;
			cef = 30 * ef / 100;
			ctf = 15 * tf / 100;
			
			cfin = cpa + cef + ctf;
			
			printf("Tu calificacion final es %f.", cfin);
			
			if(cfin >= 6)
			{
				printf(" Aprobaste.");
			}
			else
			{
				printf(" Desaprobaste.");
			}
		}
		
		
		/* 4
		Escribir un programa que imprima todos los números pares entre dos números que se le pida al usuario.
		*/
		case 4:
		{
			int a, b, n;
			
			printf("Dame 2 numeros: ");
			scanf("%d %d", &a, &b);
			
			if(a == b)
			{
				printf("Son iguales.");
				
				return 0;
			}
			
			printf("Todos los numeros pares entre ellos son:\n");
			
			if(b > a)
			{
				for(n = a + 1; n < b; n++)
				{
					if((n % 2) == 0)
					{
						printf("%d\n", n);
					}
				}
			}
			else if(a > b)
			{
				for(n = b + 1; n < a; n++)
				{
					if((n % 2) == 0)
					{
						printf("%d\n", n);
					}
				}
			}
		}
		
		
		/* 5
		Una persona se encuentra en el kilómetro 70 de una carretera, otra se encuentra en el km 150, 
		los coches tienen sentido opuesto y tienen la misma velocidad. 
		Realizar un programa para determinar en qué kilómetro de esa carretera se encontrarán.
		*/
		case 5:
		{
			 int a = 70, b = 150, e;

    		while (a != b) 
			{
        		a += 1;
        		
        		b -= 1;
    		}

   			e = a;

    		printf("Se van a encontrar en el Km %d.", e);

    return 0;
		}
	}
}
