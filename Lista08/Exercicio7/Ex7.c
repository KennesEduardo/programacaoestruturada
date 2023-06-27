#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char line[100];
    int count = 0;
    while (fgets(line, 100, file) != NULL) {
        printf("%s", line);
        count++;
    }
    printf("\nTotal de linhas: %d\n", count - 1);
    fclose(file);
    return 0;
}

