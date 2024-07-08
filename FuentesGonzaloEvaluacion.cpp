// Hecho en Dev c++
// 5°2 - Recuperatorio

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <cstdlib>
#include <iostream>

#define AZUL "\1x[42m" // El color muestra el codigo en vez del color :(

int i, j;

/* 
	PUNTO UNO
*/

int matriz1[10][6];


void crearMatriz1() // Creamos la matriz
{	
	int f;
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 6; j++)
		{
			f++;
			matriz1[i][j] = f;
			
			printf("%d ", matriz1[i][j]); // LA MATRIZ SE DESACOMODA AL HABER NUMEROS DE DISTINTOS DIGITOS, NO TUVE TIEMPO DE SOLUCIONARLO
		}
		
		printf("\n");
	}
	
	printf("La matriz fue creada\n\n");
}


void dibujarMatriz1()
{
	int g;
	int f;
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 6; j++)
		{
			if(j % 2 == 1) // igual 1 porque empieza a iterar del 0
			{
				matriz1[i][j] = matriz1[i][j] * matriz1[i][j]; // Si es columna par potencia al cuadrado
			}
			else
			{
				matriz1[i][j] = matriz1[i][j] * matriz1[i][j] * matriz1[i][j]; // Impar al cubo
			}

			printf("%d ", matriz1[i][j]); // LA MATRIZ SE DESACOMODA AL HABER NUMEROS DE DISTINTOS DIGITOS, NO TUVE TIEMPO DE SOLUCIONARLO
		}
		
		printf("\n");
	}
}


int puntoUno()
{
	int opcion;
	
	printf("\nHola! Que hacemos?\n");
	printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
	scanf("%d", &opcion);
	
	while(opcion != 3)
	{
		switch(opcion)
		{
			case 1:
				{
					crearMatriz1(); // dibujamos la matriz normal
				
					break;
				}
			
			case 2:
				{
					printf("\n\nPOTENCIAMOS LAS COLUMNAS PARES AL CUADRADO Y LAS IMPARES AL CUBO!\n");
					dibujarMatriz1(); // dibujamos la matriz potenciada
					break;
				}
			
			case 3:
				{
					return 0;
				}
			
			default:
				{
					printf("No hay mas para elejir.");
				}
		}
		
		printf("\nHola! Que hacemos?\n");
	printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
	scanf("%d", &opcion);
		
	}
}



/*
	PUNTO DOS
*/

int matriz2[4][3];

void crearMatriz2()
{	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Fila %d - Columna %d: ", i + 1, j + 1); // Cargamos los valores en la matriz
			scanf("%d", &matriz2[i][j]);
		}
		
		printf("\n");
	}
	
	printf("La matriz fue creada\n\n");	
}


void dibujarMatriz2()
{
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", matriz2[i][j]);
		}
		
		printf("\n");
	}
	
	printf("La diagonal principal es:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i == j)
			{
				printf("%d ", matriz2[i][j]); // Imprime la diagonal cuando coincide numero de fila y numero de columna
			}
		}
		
		printf("\n");
	}
	
	printf("La primera y la ultima fila es:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i == 0 || i == 3)
			{
				printf("%d ", matriz2[i][j]); // Imprime la primer y ultima fila
			}
		}
		
		printf("\n");
	}
	
	printf("La primera y la ultima columna es:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(j == 0 || j == 2)
			{
				printf("%d ", matriz2[i][j]); // Imprime la primer y ultima columna
			}
		}
		
		printf("\n");
	}
}


int puntoDos()
{
	int opcion;
	
	printf("\nHola! Que hacemos?\n");
	printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
	scanf("%d", &opcion);
	
	while(opcion != 3)
	{
		switch(opcion)
		{
			case 1:
				{
					crearMatriz2(); // Creamos la matriz
					break;
				}
			
			case 2:
				{
					dibujarMatriz2(); // Dibujamos y cumplimos las consignas
					break;
				}
			
			case 3:
				{
					return 0;
				}
			
			default:
				{
					printf("No hay mas para elejir.");
				}
		}
		
		printf("\n\nHola! Que hacemos?\n");
		printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
		scanf("%d", &opcion);
	}
}


/*
	PUNTO TRES
*/

int matriz3[4][15];
int notas[4];
int aprobados[4];
int reprobados[4];
int mayor;
int mayorI;
int mayorJ;


void crearMatriz3()
{
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 15; j++)
		{
			printf("Nota del alumno %d en la division %d: ", j + 1, i + 1); // Llamamos las notas de los alumnos
			scanf("%d", &matriz3[i][j]);
			
			notas[i] += matriz3[i][j]; // Acumula la cuenta de todas las notas de cada division
			
			if(matriz3[i][j] > 10 || matriz3[i][j] < 1) // Se repite si esta mal ingresada la nota
			{
				printf("Mal, de nuevo!");
				j--;
			}
			else if(matriz3[i][j] > 5)
			{
				aprobados[i] += 1; // Si saca mas de 6 aprueba, el vector contea los aprobados por division
			}
			else if(matriz3[i][j] < 6)
			{
				reprobados[i] += 1; // Si saca menos de 5 reprueba, el vector contea los reprobados por division
			}
			
			if(i == 0 || matriz3[i][j] > mayor) // guarda el primer numero, si encuentra uno mayor al guardado antes lo cambia
			{
				mayor = matriz3[i][j]; // almacena su valor en una variable distinta
				mayorI = i; // guarda su fila
				mayorJ = j; // guarda su columna
			}
		}
	}
}


void dibujarMatriz3()
{
	printf("Todas las notas!\n");
	for(i = 0; i < 4; i++)
	{
		printf("\n\nDivision %d", i + 1);
		
		for(j = 0; j < 15; j++)
		{
			printf("\nAlumno: %d - %d\n", j + 1, matriz3[i][j]); // repasa las notas de los alumnos por division (no en forma de matriz)
		}
		
		printf("\n");
	}
	
	for(i = 0; i < 4; i++)
	{
		printf("Division %d:\n", i + 1);
		printf("\nLa nota promedio de la division es: %d\n\n", i + 1, notas[i] / 15); // divide el acumulado de notas por los alumnos
		printf("\nLos alumnos reprobados son %d.\n", reprobados[i]); // el vector muestra el conteo al que llego de reprobados
		printf("\nLos alumnos aprobados son %d.\n", aprobados[i]); // el vector muestra el conteo al que llego de aprobados
	}
	
	printf("\nLa mejor nota fue un %d del alumno %d en la division %d!\n", mayor, mayorI, mayorJ); // Aca mostramos el mejor de lo mejor
}


int puntoTres()
{
	int opcion;
	
	printf("Hola! Que hacemos?\n");
	printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
	scanf("%d", &opcion);
	
	while(opcion != 3)
	{
		switch(opcion)
		{
			case 1:
				{
					crearMatriz3();
					break;
				}
			
			case 2:
				{
					dibujarMatriz3();
					break;
				}
			
			case 3:
				{
					return 0;
				}
			
			default:
				{
					printf("No hay mas para elejir.");
				}
		}
		
		printf("\n\nHola! Que hacemos?\n");
		printf("1. Crear matriz.\n2. Dibujar matriz.\n3. Salir.\nElija: ");
		scanf("%d", &opcion);
	}
}


int main()
{
	int opcion;
	// Habilitamos todas las prosibilidades
	printf(AZUL "Cual elejimos:\n");
	printf("1. Matriz potenciadora\n");
	printf("2. Matriz normal\n");
	printf("3. Matriz escuela\n");
	printf("4. Salir\n");
	printf("Dale: ");
	scanf("%d", &opcion);

	while(opcion != 4)
	{
		switch(opcion)
		{
			case 1:
				{
					puntoUno(); // Punto uno
					system("cls");
					break;
				}
			
			case 2:
				{
					puntoDos(); // Punto dos
					system("cls");
					break;
				}
			
			case 3:
				{
					puntoTres(); // Punto tres
					system("cls");
					break;	
				}
			
			case 4:
				{
					exit(0); // Salimos
				}
		}
		
	printf("Cual elejimos:\n");
	printf("1. Matriz potenciadora\n");
	printf("2. Matriz normal\n");
	printf("3. Matriz escuela\n");
	printf("4. Salir\n");
	printf("Dale: ");
	scanf("%d", &opcion);
	}
}
