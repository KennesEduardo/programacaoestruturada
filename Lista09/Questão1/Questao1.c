#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp;
    int i, j;
    int matrix[100][100];

    fp = fopen("imagem.pbm", "w");

    fprintf(fp, "P1\n");
    fprintf(fp, "#imagem.pbm\n");
    fprintf(fp, "100 100\n");

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            matrix[i][j] = rand() % 2;
            fprintf(fp, "%d ", matrix[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}
