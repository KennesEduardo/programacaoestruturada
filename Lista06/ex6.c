#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int i, j;
    int maior = 0;
    int segundoMaior = 0;
    int menor = 1000;
    int segundoMenor = 1000;

    srand(time(NULL));

  
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % (999 - 100 + 1) + 100;
        }
    }


    printf("Matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                segundoMaior = maior;
                maior = matriz[i][j];
            } else if (matriz[i][j] > segundoMaior && matriz[i][j] != maior) {
                segundoMaior = matriz[i][j];
            }

            if (matriz[i][j] < menor) {
                segundoMenor = menor;
                menor = matriz[i][j];
            } else if (matriz[i][j] < segundoMenor && matriz[i][j] != menor) {
                segundoMenor = matriz[i][j];
            }
        }
    }


    printf("\n");
    printf("Segundo maior valor: %d\n", segundoMaior);
    printf("Segundo menor valor: %d\n", segundoMenor);

    return 0;
}