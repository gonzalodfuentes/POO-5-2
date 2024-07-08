#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>

int i, j;

/* 
	PUNTO UNO
*/

//int matriz1[10][6];
//
//
//void crearMatriz1()
//{	
//	int f;
//	
//	for(i = 0; i < 10; i++)
//	{
//		for(j = 0; j < 6; j++)
//		{
//			f++;
//			matriz1[i][j] = f;
//		}
//		
//		printf("\n");
//	}
//	
//	printf("La matriz fue creada\n\n");
//}
//
//
//void dibujarMatriz1()
//{
//	int g;
//	int f;
//	
//	for(i = 0; i < 10; i++)
//	{
//		for(j = 0; j < 6; j++)
//		{
//			if(j % 2 == 1)
//			{
//				matriz1[i][j] = matriz1[i][j] * matriz1[i][j];
//			}
//			else
//			{
//				matriz1[i][j] = matriz1[i][j] * matriz1[i][j] * matriz1[i][j];
//			}
//			
////			if(matriz[i][j] < 10)
////			{
////				printf("%d     ", matriz[i][j]);
////			}
////			else if(matriz[i][j] < 100)
////			{
////				printf("%d    ", matriz[i][j]);
////			}
////			else if(matriz[i][j] < 1000)
////			{
////				printf("%d   ", matriz[i][j]);
////			}
////			else if(matriz[i][j] < 10000)
////			{
////				printf("%d  ", matriz[i][j]);
////			}
////			else if(matriz[i][j] < 100000)
////			{
////				printf("%d ", matriz[i][j]);
////			}
//
//			printf("%d ", matriz[i][j]);
//		}
//		
//		printf("\n");
//	}
//}
//
//
//int puntoUno()
//{
//	int opcion;
//	
//	printf("Hola! Que hacemos?\n");
//	printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
//	scanf("%d", &opcion);
//	
//	while(opcion != 3)
//	{
//		switch(opcion)
//		{
//			case 1:
//				{
//					crearMatriz();
//				
//					break;
//				}
//			
//			case 2:
//				{
//					dibujarMatriz();
//				}
//			
//			case 3:
//				{
//					exit(0);
//				}
//			
//			default:
//				{
//					printf("No hay mas para elejir.");
//				}
//		}
//		
//		printf("\n\nHola! Que hacemos?\n");
//		printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
//		scanf("%d", &opcion);
//	}
//}



/*
	PUNTO DOS
*/

//int matriz[4][3];
//
//void crearMatriz2()
//{	
//	for(i = 0; i < 4; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			printf("Fila %d - Columna %d: ", i + 1, j + 1);
//			scanf("%d", &matriz[i][j]);
//		}
//		
//		printf("\n");
//	}
//	
//	printf("La matriz fue creada\n\n");	
//}
//
//
//void dibujarMatriz2()
//{
//	for(i = 0; i < 4; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			printf("%d ", matriz[i][j]);
//		}
//		
//		printf("\n");
//	}
//	
//	printf("La diagonal principal es:\n");
//	for(i = 0; i < 4; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			if(i == j)
//			{
//				printf("%d ", matriz[i][j]);
//			}
//		}
//		
//		printf("\n");
//	}
//	
//	printf("La diagonal secundaria es:\n");
//	for(i = 0; i < 4; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			if(i == j - 3)
//			{
//				printf("%d ", matriz[i][j]);
//			}
//		}
//		
//		printf("\n");
//	}
//	
//	printf("La primera y la ultima fila es:\n");
//	for(i = 0; i < 4; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			if(i == 0 || i == 3)
//			{
//				printf("%d ", matriz[i][j]);
//			}
//		}
//		
//		printf("\n");
//	}
//	
//	printf("La primera y la ultima columna es:\n");
//	for(i = 0; i < 4; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			if(j == 0 || j == 2)
//			{
//				printf("%d ", matriz[i][j]);
//			}
//		}
//		
//		printf("\n");
//	}
//}
//
//
//int puntoDos()
//{
//	int opcion;
//	
//	printf("Hola! Que hacemos?\n");
//	printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
//	scanf("%d", &opcion);
//	
//	while(opcion != 3)
//	{
//		switch(opcion)
//		{
//			case 1:
//				{
//					crearMatriz2();
//					break;
//				}
//			
//			case 2:
//				{
//					dibujarMatriz2();
//					break;
//				}
//			
//			case 3:
//				{
//					exit(0);
//				}
//			
//			default:
//				{
//					printf("No hay mas para elejir.");
//				}
//		}
//		
//		printf("\n\nHola! Que hacemos?\n");
//		printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
//		scanf("%d", &opcion);
//	}
//}


/*
	PUNTO TRES
*/

int matriz[4][15];


void crearMatriz()
{
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 15; j++)
		{
			
		}
	}
}
