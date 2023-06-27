#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("numeros.txt", "w");
    int number;
    do {
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &number);
        if (number != 0) {
            char *sign = number > 0 ? "positivo" : "negativo";
            char *parity = number % 2 == 0 ? "par" : "ímpar";
            fprintf(fp, "%d -> %s %s\n", number, sign, parity);
        }
    } while (number != 0);
    fclose(fp);
    return 0;
}

