#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int random_number() {
    return (rand() % 3) + 1;
}

int main() {
    int jogar, mov, movbot, j = 0, c = 0, j2 = 0, c2 = 0;
    char opciones[4][10];
    strcpy(opciones[1], "Piedra");
    strcpy(opciones[2], "Papel");
    strcpy(opciones[3], "Tijera");

    printf("Voce quer brincar de pedra, papel ou tijera??\n");
    printf("1 Sim, 2 Nao: ");
    scanf("%d", &jogar);

    if (jogar != 1) {
        printf("adeus irmao");
        return 0;
    }

    // Clear the screen in a more portable way
    system("cls");

    do {
        do {
            printf("1 piedra, 2 papel, 3 tijera: ");
            scanf("%d", &mov);
            if(mov < 1 || mov > 3){
            	printf("Error, inserte de nuevo\n");
            	continue;
			}
            printf("Haz elejido %s\n", opciones[mov]);

            movbot = random_number();

            printf("\nLa maquina esta pensando...\n");
            sleep(1);

            printf("\nLa maquina eligio %s\n", opciones[movbot]);
			printf("\n");
			
            if (mov == movbot) {
                printf("Empate!\n");
            } else if ((mov == 1 && movbot == 3) ||
                       (mov == 2 && movbot == 1) ||
                       (mov == 3 && movbot == 2)) {
                printf("Usted gana!\n");
                j += 1;
            } else {
                printf("La computadora gana!\n");
                c += 1;
            }
            printf("J %d - C %d", j, c);
            
		sleep(3);
        system("cls");

        } while (j != 2 && c != 2);
		
        if (j == 2) {
        	printf("La ronda la gano usted!\n");
            j2 += 1;
        } else if (c == 2) {
        	printf("La ronda la gano la computadora!\n");
            c2 += 1;
        }
        printf("JUGADOR %d - COMPUTADORA %d", j2, c2);
        j = 0;
        c = 0;
        
        sleep(3);
        system("cls");
    } while (j2 != 3 && c2 != 3);
    
    if (j2 == 3)
    {
    	printf("JUGADOR CAMPEON!");
	} else if (c2 == 3)
	{
		printf("COMPU CAMPEONA!");
	}

    return 0;
}










