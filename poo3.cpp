#include<stdio.h>

int main()
{
    int menuopcion;

    printf("17 opciones, elija la que desea: ");
    scanf("%d", &menuopcion);

    switch(menuopcion)
    {
		/* 1
        Hallar tres números consecutivos cuya suma sea 87.
        */
        case 1:
        {
            
            int num, n, i;

            printf("Encontrar 3 numeros que den 87.\n");

            for(i = 0; i < 3; i++)
            {
                printf("Numero %d: ", i+1);
                scanf("%d", &n);

                num += n;
            }

            if(num == 87)
            {
                printf("Los 3 numeros dan 87.");
            }
            else
            {
                printf("No dan 87, dan %d, reinicie y pruebe con otros numeros.", num);
            }

            break;
        }


        /* 2
        Calcular la media (promedio) de 3 números
        */
        case 2:
        {
            int prom, p, n, i;

            printf("Promedio de 3 numeros.\n");

            for(i = 0; i < 3; i++)
            {
                printf("Numero %d: ", i+1);
                scanf("%d", &n);

                p += n;
            }

            prom = p / 3;

            printf("El promedio entre los 3 numeros es %d", prom);
        
            break;
        }


        /* 3
        Determinar si un valor numérico positivo, mayor que cero ingresado es par o impar.
        */
        case 3:
        {
            int n;

            printf("Numero: ");
            scanf("%d", &n);

            if(n >= 0)
            {
                if((n % 2) == 0)
                {
                    printf("El numero (positivo) es par");
                }
                else
                {
                    printf("El numero (positivo) es impar");
                }
            }
            else
            {
                printf("Otro numero, este es negativo.");
            }
        
            break;
        }


        /* 4
        Dado como entrada las notas de 4 pruebas de un alumno y la nota de tarea,
        se pide determinar si el alumno aprobó o no la materia (se aprueba con 6).
        */
        case 4:
        {
            float p, p4, t, n;
            int i;

            for(i = 0; i < 4; i++)
            {
                printf("Nota de la prueba %d: ", i+1);
                scanf("%f", &p);

                p4 += p;
            }

            printf("Nota de la tarea: ");
            scanf("%f", &t);

            n = (p4 + t) / 5;

            printf("El promedio es %f. ", n);

            if(n >= 6)
            {
                printf("Aprobo");
            }
            else
            {
                printf("Desaprobo");
            }

            break;
        }


        /* 5
        Dada una nota escriba “Aprobado” ó “Reprobado” según la nota ingresada,
        pero además si la nota de aprobación es mayor o igual a 8, escriba, felicitaciones.
        Y si la nota es 1, escriba “Debes esforzarte más”.
        */
        case 5:
        {
            int n;

            printf("Nota del examen: ");
            scanf("%d", &n);

            if(n > 5)
            {
                printf("Aprobado ");

                if(n > 7)
                {
                    printf("¡Felicitaciones!");
                }
            }
            else
            {
                printf("Desaprobado ");

                if(n == 1)
                {
                    printf("¡Debes esforzarte mas!");
                }
            }

            break;
        }


        /* 6
        Dado un alquiler, se pide determinar cuánto paga en impuesto por concepto de alquiler,
        considerando la siguiente escala de cobro:
        sueldo <= 202? 0% impuesto,
        202 < sueldo <= 607? 5%,
        607 < sueldo <= 1.013? 10%,
        1.013 < sueldo <= 1.418? 15%,
        1.418 < sueldo? 25%
        */
        case 6:
        {
    		int s, i;

    		printf("Cuanto cobras?: ");
    		scanf("%d", &s);

   			if (s <= 202) 
   			{
      			printf("No pagara impuestos por concepto de alquiler");
 			} 
    		else if (202 < s && s <= 607)
    		{
    		    i = 5 * s / 100;
    		} 
    		else if (607 < s && s <= 1013) 
    		{
    		    i = 10 * s / 100;
    		} 
    		else if (1013 < s && s <= 1418) 
    		{
    		    i = 15 * s / 100;
    		} 
    		else if (1418 < s)
    		{
    		    i = 25 * s / 100;
    		}

    		printf("Pagas $%d de impuestos por concepto de alquiler.\n", i);
			
			break;
        }


        /* 7
        Dada como entrada una hora en formato hh:mm, [24],
        genere como salida la misma hora pero en formato hh:mm [am/pm]
        */
        case 7:
        {
            int h, m;

            printf("Hora (0 a 23): ");
            scanf("%d", &h);

            if(h < 0 || h > 23)
            {
                printf("Hora invalida");

                return 0;
            }

            printf("Minutos (0 a 59): ");
            scanf("%d", &m);

            if(m < 0 || m > 59)
            {
                printf("Minutos invalidos");

                return 0;
            }

            if(h > 11)
            {
                printf("La hora es: [ %d:%d PM ]", h, m);
            }
            else
            {
                printf("La hora es: [ %d:%d AM ]", h, m);
            }

            break;
        }


        /* 8
        Suponga que un individuo desea invertir su capital en un banco y desea saber
        ¿Cuánto dinero ahorra después de un mes, si el banco paga a razón de 2% mensual?
        */
        case 8:
        {
            int p;

            printf("Tu plata en el banco: ");
            scanf("%d", &p);

            p = p + (2 * p / 100);

            printf("Vas a tener %d pesos ahorrados en el banco al final del mes.", p);
			
			break;
        }


        /* 9
		Una persona tiene 50 años, y su hijo 20. ¿Dentro de cuántos años la edad del padre será el doble que la de su hijo?
        */
        case 9:
        {
        	int p = 50, h = 20, d, c;

        	printf("El padre tiene 50 años.\nEl hijo tiene 20 años.\n");

        	do
        	{
        		d = 0;

        		p += 1;

        		h += 1;

        		d = h * 2;

        		c += 1;
        	} while(d != p);

        	printf("En %d años, el papa le va a doblar la edad al hijo cuando este ultimo tenga %d y el %d.", c, h, p);
        
        	break;
        }


        /* 10
		Convierta a horas, minutos y segundos un tiempo expresado en segundos
        */
        case 10:
        {
        	int h, m, s;

            printf("Tiempo en segundos: ");
            scanf("%d", &s);

            m = s / 60; 
            s = s % 60;

            h = m / 60;
            m = m % 60;

            printf("En hh:mm:ss es: %d:%d:%d\n", h, m, s);
        
        	break;
        }


        /* 11
		Un alumno desea saber cuál será su calificación final, dicha calificación se compone de los siguientes porcentajes:
		55% del promedio final de sus calificaciones (de sus  3 evaluaciones parciales)
		30% de la calificación de promedio
		15% de la calificación de un trabajo final
        */
        case 11:
        {
        	float e, pa, m, t, pr, ce, cm, ct, n;
        	int i;

        	for(i = 0; i < 3; i++)
        	{
        		printf("Nota del parcial %d: ", i+1);
        		scanf("%f", &e);

        		pa += e;
        	}

        	printf("Promedio en la materia general: ");
        	scanf("%f", &m);

        	printf("Calificacion del trabajo final: ");
        	scanf("%f", &t);

        	pr = pa / 3;

        	ce = 55 * pr / 100;

        	cm = 30 * m / 100;

        	ct = 15 * t / 100;

        	n = ce + cm + ct;

        	if(n > 5)
        	{
        		printf("Aprobaste la materia");
        	}
        	else
        	{
        		printf("Desaprobaste la materia");
        	}

        	printf(", tu calificacion final es %f.", n);
        
        	break;
        }


        /* 12
		Un vendedor recibe un sueldo base más un 10 % extra por comisión de sus ventas, el vendedor desea saber cuánto dinero obtendrá por
		concepto de comisiones por las tres ventas que realiza en el mes, y el total que recibirá en el mes
        */
        case 12:
        {
        	float s, v, co, c2, t;
			int i;

			printf("Cual es su sueldo?: ");
			scanf("%f", &s);

			for(i = 0; i < 3; i++)
			{
				printf("Cuanto recibio en la venta %d?: ", i+1);
				scanf("%f", &v);

				co = v + (10 * v / 100);

				c2 += co;

				v = 0;

				co = 0;
			}

			t = s + c2;

			printf("Sus comisiones (10%% extra de la venta) por las 3 ventas realizadas en el mes son de $%f.\n", c2);
			printf("El total que recibe en el mes (sueldo + comisiones) son $%f.", t);
        
			break;
        }


        /* 13
		Una tienda ofrece un descuento del 15% sobre el total de la compra, 
		y un cliente desea saber cuánto deberá pagar finalmente por su compra.
        */
        case 13:
        {
        	float pre, pag, c, d, t;
        	int n, pro, i;

        	printf("Cuantos productos compraste? (sin contar cantidad): ");
        	scanf("%d", &n);

        	for(i = 0; i < n; i++)
        	{
        		printf("Precio del producto individual %d?: ", i+1);
        		scanf("%f", &pre);

        		printf("Cantidad del producto %d?: ", i+1);
        		scanf("%d", &pro);

        		pag = pre * pro;

        		c += pag;
        	}

        	d = 15 * c / 100;

        	t = c + d;

        	printf("Con el 15%% de descuento, debera pagar $%f.", t);

        	break;
        }


        /* 14
        Generar el valor absoluto de un número dado como entrada.
        Valor absoluto o módulo de un número real es su valor numérico sin tener en cuenta su signo, sea este positivo (+) o negativo (-).
        Así, por ejemplo, 3 es el valor absoluto de +3 y de -3.
        */
        case 14:
        {
        	int n;

        	printf("Ingrese un numero: ");
        	scanf("%d", &n);

        	if(n < 0)
        	{
        		n = n + (n * (-1)) * 2;
        	}

        	printf("Su valor absoluto es %d", n);

        	break;
        }


        /* 15
		Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.
        */
        case 15:
        {
        	int h, m, g, ph, pm, t;

        	printf("Cuantos hombres tenes en tu curso?: ");
        	scanf("%d", &h);

        	printf("Cuantas mujeres tenes en tu curso?: ");
        	scanf("%d", &m);

        	g = h + m;

            t = g;

        	ph = h * 100 / t;

        	pm = 100 - ph;

        	printf("El porcentaje de genero en el grupo es de %d hombres y %d mujeres.", ph, pm);

        	break;
        }


        /* 16
		Dada una cantidad en pesos argentinos, obtener la equivalencia en dólares estadounidenses, asumiendo que la unidad cambiaría es un
		dato desconocido.
        */
        case 16:
        {
        	float p, d, c;

        	printf("Pesos: ");
        	scanf("%f", &p);

        	printf("Cuanto esta el dolar?: ");
        	scanf("%f", &d);

        	c = p / d;

        	printf("Tus pesos son %f dolares", c);

        	break;
        }


        /* 17
		Calcular la FCM para cualquier persona, sabiendo que ésta es la fórmula de la Frecuencia cardíaca máxima por géneros: 
		Para hombres FCmax = ((210 – (0,5 * edad en años)) – 1% del peso) + 4
		Para mujeres FCmax = (210 – (0,5 * edad en años)) - 1% del peso
        */
        case 17:
        {
        	float p, FCmax;
        	int e, s;

            printf("Edad?: ");
            scanf("%d", &e);

            printf("Peso? (en Kg): ");
            scanf("%f", &p);
                
            printf("Es hombre o mujer? (1-H / 2-M): ");
            scanf("%d", &s);
                
            if(s == 1)
            {
            	FCmax = ((210- (0.5 * e)) - (1 * p / 100)) + 4;
            }
            else if(s == 2)
            {
                FCmax = (210- (0.5 * e)) - (1 * p / 100);
            }

            printf("Su FCM es de %f", FCmax);
                
            break;
        }
    }
}