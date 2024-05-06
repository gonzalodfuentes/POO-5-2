#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 // Tamaño del tablero

int tablero[N][N];
int pirata_fila, pirata_columna;
int tesoro_fila, tesoro_columna;

int inicializarTablero() {
    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    printf("Cuantas filas queres que tenga el tablero?: ");
    scanf("%d", &filas);

    prinf("Y cuantas columnas?: ");
    scanf("%d", &columnas);

    printf("La matriz sera %dx%d");

    pirata_fila = filas;
    pirata_columna = columnas;
    tesoro_fila = filas;
    tesoro_columna = columnas;

    tablero[pirata_fila][pirata_columna] = 1;
    tablero[tesoro_fila][tesoro_columna] = 2;
}

int mostrarTablero() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tablero[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int opcion;

    do {
        printf("Menú:\n");
        printf("1. Inicializar tablero\n");
        printf("2. Mostrar tablero\n");
        printf("3. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                inicializarTablero();
                printf("Tablero inicializado.\n");
                break;
            case 2:
                mostrarTablero();
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción inválida. Por favor, ingrese una opción válida.\n");
        }
    } while (opcion != 3);

    return 0;
}
