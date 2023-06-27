#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp;
    int i, j;
    int matrix[100][300];

    fp = fopen("imagem3.ppm", "w");

    fprintf(fp, "P3\n");
    fprintf(fp, "#imagem3.ppm\n");
    fprintf(fp, "100 100\n");
    fprintf(fp, "255\n");

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 300; j++) {
            matrix[i][j] = rand() % 256;
            fprintf(fp, "%d ", matrix[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}

