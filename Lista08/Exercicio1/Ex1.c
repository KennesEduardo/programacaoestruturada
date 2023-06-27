#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    fp = fopen("numeros_aleatorios.txt", "w");
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        int random_number = rand() % 201 - 100;
        fprintf(fp, "%d\n", random_number);
    }
    fclose(fp);
    return 0;
}
