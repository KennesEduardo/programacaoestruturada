#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *file = fopen("texto.txt", "w");
    srand(time(NULL));
    int lines = rand() % 11 + 10;
    int i, j, k;
    
    for (i = 0; i < lines; i++) {
        int words = rand() % 16 + 5;
        for (j = 0; j < words; j++) {
            int letters = rand() % 15 + 1;
            for (k = 0; k < letters; k++) {
                char letter = rand() % 94 + 33;
                fprintf(file, "%c", letter);
            }
            fprintf(file, " ");
        }
        fprintf(file, "\n");
    }
    fclose(file);
    return 0;
}

