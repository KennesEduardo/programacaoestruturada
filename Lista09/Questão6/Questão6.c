#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    int i, j;
    fp = fopen("imagem.pgm", "w");
    fprintf(fp, "P2\n100 100\n255\n");
    srand(time(NULL));
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            fprintf(fp, "%d ", rand() % 256);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}


