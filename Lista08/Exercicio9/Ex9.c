#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("texto2.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    FILE *new_file = fopen("novoTexto.txt", "w");
    if (new_file == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }
    char c;
    while ((c = fgetc(file)) != EOF) {
        fputc(toupper(c), new_file);
    }
    fclose(file);
    fclose(new_file);
    return 0;
}

