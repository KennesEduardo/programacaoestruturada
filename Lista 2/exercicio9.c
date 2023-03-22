#include<stdio.h>

void main() {

    int num;

    printf("Digite um numero inteiro:\n ");
    scanf("%d", &num);

    if (num >= 100 && num <= 200) {
        printf("voce digitou um numero entra 100 e 200 ");
    }else {
        printf("voce digitou um numero fora da faixa");
    }


    return 0;
}