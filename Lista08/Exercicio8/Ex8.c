#include <stdio.h>

int main() {
    FILE *file = fopen("texto1.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char line[100];
    int count = 0;
    while (fgets(line, 100, file) != NULL) {
        printf("%d. %s", ++count, line);
    }
    fclose(file);
    return 0;
}

