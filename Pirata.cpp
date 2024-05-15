// DECLARAMOS LAS BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

// DECLARAMOS LOS COLORES (FONDO Y LETRA)
#define RESET_COLOR    "\x1b[0m"
#define NEGRO_T        "\x1b[30m"
#define NEGRO_F        "\x1b[40m"
#define ROJO_T     "\x1b[31m"
#define ROJO_F     "\x1b[41m"
#define VERDE_T        "\x1b[32m"
#define VERDE_F        "\x1b[42m"
#define ARENA "\x1b[38;5;223m"
#define AMARILLO_T "\x1b[38;5;226m"
#define    AMARILLO_F  "\x1b[43m"
#define AZUL_T     "\x1b[34m"
#define    AZUL_F      "\x1b[44m"
#define MAGENTA_T  "\x1b[35m"
#define MAGENTA_F  "\x1b[45m"
#define CYAN_T     "\x1b[38;5;117m"
#define CYAN_F     "\x1b[46m"
#define BLANCO_T   "\x1b[37m"
#define BLANCO_F   "\x1b[47m"
#define PIRATA_T "\x1b[38;5;226m"

// INT's
int filas, columnas;
int i, j;
int pf, pc, tf, tc;
int menu;
int b1, b2;
int y;
char mov;
int z = 0;

// FUNCION PARA CUANDO CAIGAMOS AL AGUA
void perdiste() 
{
    printf("¡Caiste al agua!\n");
    printf("Perdiste :(\n");
    printf("Reiniciando...");
    Sleep(3000);
    system("cls");
}

// FUNCION PARA CREAR LA MATRIZ
int hacerMatriz() 
{
    system("cls");

	// CREAMOS LA MATRIZ EN LA PRIMERA OCASION
    if (z == 0) 
	{
        printf("ANTES DE IR AL MENU - HAGAMOS LA MATRIZ:\n\n");
        z += 1; // PARA QUE ESTO NO VUELVA A APARECER
    }

	// CREAMOS FILAS Y COLUMNAS
    printf("Cantidad de filas: ");
    scanf("%d", &filas);

    printf("Cantidad de columnas: ");
    scanf("%d", &columnas);

	// SI LA MATRIZ NO ES 4x4 O MAS TENES QUE VOLVER A DECLARARLA
    if (filas < 4 || columnas < 4) 
	{
        printf("No se puede menor a 4x4!!..\n");
        filas = 0;
        columnas = 0;
        Sleep(2000);
        system("cls");
        return 1;
    }

    system("cls");
    printf("Ok...\n\n");
    return 0;
}

int empezarJugar() 
{
    system("cls");

    do 
	{
        pf = rand() % (filas - 2) + 1;
        pc = rand() % (columnas - 2) + 1;
        tf = rand() % (filas - 2) + 1;
        tc = rand() % (columnas - 2) + 1;

        b1 = filas - 1;
        b2 = columnas - 1;

        printf("\n");
    }
	while ((pf == tf && pc == tc) || pf == 0 || pf == filas - 1 || pc == 0 || pc == columnas - 1 || tf == 0 || tf == filas - 1 || tc == 0 || tc == columnas - 1);

    system("cls");
    printf("Empezamos el juego, tienes 50 movimientos\n");

    for (y = 0; y < 50; y++) 
	{
        for (i = 0; i < filas; i++) 	//Se imprime el mapa, el pirata y el tesoro (dejamos como T para poder checkearlo mientras lo programamos)
		{
            for (j = 0; j < columnas; j++) 
			{
                if (pf == i && pc == j) 
				{
                    printf(RESET_COLOR "P ");
                } 
				else if (tf == i && tc == j) 
				{
                    printf(ARENA "T ");
                } 
				else if ((i == b1 && j == 0) || (j == b2 && i == 0)) 
				{
                    printf(ROJO_T "B ");
                } 
				else if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1) 
				{
                    printf(CYAN_T "~ ");
                } 
				else 
				{
                    printf(ARENA "- ");
                }
            }
            printf("\n");
        }

        printf("\n");
        printf(RESET_COLOR "Movimientos: %d \nMueve al pirata con wasd: ", y + 1);
        scanf(" %c", &mov);
        system("cls");
        printf("\n");

        switch (mov)  //Movimiento
		{
            case 'w':
                if (pf == 1) 
				{
                    perdiste();
                    return 0;
                } 
				else 
				{
                    pf -= 1;
                }
                break;

            case 's':
                if (pf == filas - 2) 
				{
                    perdiste();
                    return 0;
                } 
				else 
				{
                    pf += 1;
                }
                break;

            case 'd':
                if (pc == columnas - 2) 
				{
                    perdiste();
                    return 0;
                } 
				else 
				{
                    pc += 1;
                }
                break;

            case 'a':
                if (pc == 1) 
				{
                    perdiste();
                    return 0;
                } 
				else 
				{
                    pc -= 1;
                }
                break;

            default:
                printf("Movimiento no reconocido.\n");
                break;
        }

        if (pf == tf && pc == tc) 
		{
            for (i = 0; i < filas; i++) 			//Algoritmo para detectar si tocó el tesoro o el agua
			{
                for (j = 0; j < columnas; j++) 
				{
                    if (pf == i && pc == j) 
					{
                        printf(AMARILLO_T "W ");
                    } 
					else if ((i == b1 && j == 0) || (j == b2 && i == 0)) 
					{
                        printf(ROJO_T "B ");
                    } 
					else if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1) 
					{
                        printf(CYAN_T "~ ");
                    } 
					else 
					{
                        printf(ARENA "- ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            printf("FELICIDADES, ENCONTRASTE EL TESORO!\n");
            return 1;
        }
    }

    printf("Se te acabaron los movimientos... ¡mejor suerte la proxima vez!\n");
    return 0;
}

int main()  //Menu
{

    do 
	{
        if (z == 0) 
		{
            hacerMatriz();
        }

        printf("Menu:\n1. Crear otro tablero\n2. Empezar a jugar\n3. Salir\nElija: ");
        scanf("%d", &menu);

        switch (menu) 
		{
            case 1:
                hacerMatriz();
                break;

            case 2:
                if (filas == 0 || columnas == 0) 
				{
                    printf("Primero crea un tablero.\n");
                    Sleep(2000);
                    system("cls");
                } 
				else 
				{
                    if (empezarJugar() == 1) 
					{
                        return 0;
                    }
                }
                break;

            case 3:
                return 0;

            default:
                printf("Opcion no valida.\n");
                Sleep(2000);
                system("cls");
                break;
        }
    } 
	while (menu != 3);

    return 0;
}






