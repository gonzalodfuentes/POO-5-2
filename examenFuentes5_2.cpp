// Carrera liebre y tortuga
// Se le asignan 1 y 2
// Tablero 15x15 con una letra 'X'
// 2 posiciones al azar con 'O' (pozos)
// 2 posiciones al azar con 'C' (comodin)
// 2 equipos, tortuga y liebre
// Un dado por turno y decide el movimiento
// Tortuga avanza lo que indica el dado
// Liebre avanza el doble de lo que indica el dado
// Si se cruza con un pozo pierde
// Si se cruza con un comodin intercambian avance
// 'T' es tortuga, 'L' es liebre
// Cada uno parte del 0;0
// Caen 3 veces pierden
// Finaliza al llegar a la meta sin caer
// No hay rebote

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int cancha[15][15] = {0};
int i;
int j;
int b;
int pozoFil[3], pozoCol[3], comoFil[3], comoCol[3];

void azarPozos()
{
	srand(time(NULL));
	
	int k = -1;
	int error = 0;
	
	do
	{
		k++;
		
		pozoFil[k] = rand() % 15 + 1;
		pozoCol[k] = rand() % 15 + 1;
		
		if(k == 1 && (pozoFil[k] == pozoFil[0] && pozoCol[k] == pozoCol[0]))
		{
			k -= 1;
		}
		else if(k == 2 && ((pozoFil[k] == pozoFil[0] && pozoCol[k] == pozoCol[0]) || (pozoFil[k] == pozoFil[1] && pozoCol[k] == pozoCol[1])))
		{
			k -= 1;
		}
	}
	while(k != 2);
	
	for(i = 0; i < 3; i++)
	{
		cancha[pozoFil[i]][pozoCol[i]] = 3;

//		printf("%d\n", pozoFil[i]);
//		printf("%d\n\n", pozoCol[i]);
	}
//	printf("\n\n\n\n");
}


void azarComodines()
{
	srand(time(NULL));
	
	int k = -1;
	int error = 0;
	
	do
	{
		k++;
		
		comoFil[k] = rand() % 15 + 1;
		comoCol[k] = rand() % 15 + 1;
		
		if(k == 1 && (comoFil[k] == comoFil[0] && comoCol[k] == comoCol[0]))
		{
			k -= 1;
		}
		else if(k == 2 && ((comoFil[k] == comoFil[0] && comoCol[k] == comoCol[0]) || (comoFil[k] == comoFil[1] && comoCol[k] == comoCol[1])))
		{
			k -= 1;
		}
		else if(comoFil[k] == pozoFil[0] && comoCol[k] == pozoCol[0])
		{
			k -= 1;
		}
		else if(comoFil[k] == pozoFil[1] && comoCol[k] == pozoCol[1])
		{
			k -= 1;
		}
		else if(comoFil[k] == pozoFil[2] && comoCol[k] == pozoCol[2])
		{
			k -= 1;
		}
	}
	while(k != 2);
	
	for(i = 0; i < 3; i++)
	{
		cancha[comoFil[i]][comoCol[i]] = 4;

//		printf("%d\n", comoFil[i]);
//		printf("%d\n\n", comoCol[i]);
	}
}


void hacerTablero()
{
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 15; j++)
		{
			if(cancha[i][j] == 0)
			{
				printf("-  ");
			}
			else if(cancha[i][j] == 1)
			{
				printf("T  ");
			}
			else if(cancha[i][j] == 2)
			{
				printf("L  ");
			}
			else if(cancha[i][j] == 3)
			{
				printf("O  ");
			}
			else if(cancha[i][j] == 4)
			{
				printf("C  ");
			}
			else if(cancha[i][j] == 5)
			{
				printf("F  ");
			}
//			printf("%d  ", cancha[i][j]);
		}
		
		printf("\n");
	}
}


void dados()
{
	int tiro;
	
	srand(time(NULL));
	
	tiro = rand() % 7 + 1;
}


void movimiento()
{
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 15; j++)
		{
			if(cancha[i][j] == 1)
			{
				cancha[i][j] = cancha[i][j + tiro];
			}
			else if(cancha[i][j] == 2)
			{
				cancha[i][j] = cancha[i][j + tiro];
			}
		}
	}
}


void carrera()
{
	int b;
	int mov = 0;
	
	do
	{
		mov++;
		
		hacerTablero();
		
		dados();
		
		switch(tiro)
		{
			case 1: 
			{
				movimiento();
			}
			
			case 2:
			{
				movimiento();
			}
			
			case 3: 
			{
				movimiento();
			}
			
			case 4:
			{
				movimiento();
			}
			
			case 5: 
			{
				movimiento();
			}
			
			case 6:
			{
				movimiento();
			}
		}
	}
	while(b == 0);
}


int main()
{
	azarPozos();
	azarComodines();
	
	cancha[14][14] = 5; 
	
	hacerTablero();
//	carrera();
}
