#include<stdio.h>

int main()
{
     int menuopcion;

     printf("Eliga una opcion: ");
     scanf("%d", &menuopcion);

     switch(menuopcion)
     {
	/* 1
	Enviar un mensaje de texto o whatsApp desde el teléfono celular. 
	Se deberá verificar que haya crédito o servicio de Wifi para poder realizar la operación, según corresponda.
	*/
	case 1:
        {
            int cre, mow, env;
            char men[100];
            char par[50];

            printf("Posee datos o internet? (1 - SI || 2 - NO): ");
            scanf("%d", &cre);

            if(cre == 2)
            {
                printf("No se puede enviar ningun mensaje");
            }
            else
            {
                printf("\n----------------------------------------------\n");

                printf("Quiere abir 'Mensaje de texto' o 'Whatsapp'? (1 - MdT || 2 - WApp): ");
                scanf("%d", &mow);

                printf("Escriba su mensaje: ");
                scanf(" %[^\n]", men);

                printf("Para: ");
                scanf(" %[^\n]", par);

                printf("Enviar (1 - SI || OTRO - NO): ");
                scanf(" %d", &env);
                
                if(env != 1)
                {
                    printf("Mensaje cancelado.");
                    printf("\n----------------------------------------------\n");
                    return 0;
                }

                if(mow == 1)
                {
                    printf("\nTu mensaje de texto para ' %s ' se envio: ' %s '.", par, men);
                }
                else if(mow == 2)
                {
                    printf("\nTu whatsapp para ' %s ' se envio: ' %s '.", par, men);
                }
                else
                {
                    printf("Invalido");
                }

                printf("\n----------------------------------------------\n");
        	}
			
		break;
        }


	/* 2 
	Para ingresar a un curso de capacitación se solicita a los empleados aprobar dos exámenes. 
	Ingresarán aquellos que hayan logrado como mínimo 7 y 8 puntos respectivamente. 
	Se deberá mostrar en pantalla la palabra “Apto” o “No apto”.
	*/
	case 2:
	{
            int n1, n2;

            printf("Cuanto te sacaste en los 2 examenes?: ");
            scanf("%d \n %d", &n1, &n2);

            if(n1 >= 7 && n2 >= 8)
            {
                printf("Apto\n");
            }
            else
            {
            	printf("No Apto\n");
            }

            break;
        }

	/* 3
	Se ingresa el sueldo de un trabajador y se aplica un aumento del 15% si su sueldo es inferior a $8.000 y 12% en caso contrario. 
	Luego, mostrar el nuevo sueldo del trabajador.
	*/
	case 3:
	{
            float s;

            printf("Cual es tu sueldo? \n");
            scanf("%f", &s);

            if(s < 8000)
            {
                s += 15 * s / 100;
            }
            else
            { 
            	s += 12 * s / 100;
            }

            printf("Tu sueldo con el aumento es de %f\n", s);

            break;
        }
     }
}
