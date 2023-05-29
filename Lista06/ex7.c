#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    int mat[7][7];

    srand(time(NULL));
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            mat[i][j] = rand() % (50 - 10 + 1) + 10;
        }
    }

  printf("\n");

    printf("Matriz original:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

  printf("\n");

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (mat[i][j] % 2 == 0) {
                mat[i][j] = 0;
            }
        }
    }

  printf("\n");

    printf("Matriz com valores pares substituídos por zero:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (mat[i][j] % 2 != 0) {
                mat[i][j] = 1;
            }
        }
    }

  printf("\n");

    printf("Matriz com valores ímpares substituídos por um:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}