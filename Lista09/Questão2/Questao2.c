#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp;
    int i, j;
    int matrix[100][100];

    fp = fopen("imagem2.pgm", "w");

    fprintf(fp, "P2\n");
    fprintf(fp, "#imagem2.pgm\n");
    fprintf(fp, "100 100\n");
    fprintf(fp, "255\n");

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            matrix[i][j] = rand() % 256;
            fprintf(fp, "%d ", matrix[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}

