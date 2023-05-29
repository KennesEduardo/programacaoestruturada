#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[3][3];
    int i, j;
    srand(time(NULL));
    

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] = rand() % 2;
        }
    }
    

    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    int count;
    for (i = 0; i < 3; i++) {
        count = 0;
        for (j = 0; j < 3; j++) {
            if (mat[i][j] == mat[i][0]) {
                count++;
            }
        }
        if (count == 3) {
            printf("Linha %d tem todos os valores iguais: %d\n", i+1, mat[i][0]);
        }
    }
    
    for (j = 0; j < 3; j++) {
        count = 0;
        for (i = 0; i < 3; i++) {
            if (mat[i][j] == mat[0][j]) {
                count++;
            }
        }
        if (count == 3) {
            printf("Coluna %d tem todos os valores iguais: %d\n", j+1, mat[0][j]);
        }
    }
    
    return 0;
}