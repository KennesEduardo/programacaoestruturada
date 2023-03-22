// Faça um código que receba um número inteiro (metros) e converta para polegadas. Dica: 1m = 100cm; 1 polegada = 2,54cm.
#include<stdio.h>
void main (){

    int num;
    float numConvertido;

    printf("Digite o numero que deseja converte: \n ");
    scanf("%i", &num);

    num = num * 100; 
    numConvertido = num / 2.54;

    printf("o valor convertido em polegadas e: %.2f", numConvertido);

    return 0;
}