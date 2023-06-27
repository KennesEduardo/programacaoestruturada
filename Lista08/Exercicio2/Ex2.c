#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("numeros.txt", "w");
    for (int i = 0; i < 100; i++) {
        fprintf(fp, "%d ", i);
        if ((i + 1) % 10 == 0) {
            fprintf(fp, "\n");
        }
    }
    fclose(fp);
    return 0;
}

