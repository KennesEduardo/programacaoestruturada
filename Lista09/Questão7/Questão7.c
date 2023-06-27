#include <stdio.h>

int main() {
    FILE *fp;
    int i, j;
    fp = fopen("imagem2.pgm", "w");
    fprintf(fp, "P2\n100 256\n255\n");
    for (i = 0; i < 256; i++) {
        for ( j = 0; j < 100; j++) {
            fprintf(fp, "%d ", i);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}

