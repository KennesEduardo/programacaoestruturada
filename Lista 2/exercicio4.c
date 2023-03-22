#include<stdio.h>

void main (){

    float temperaturaC;
    float temperaturaF;


    printf("Digite a temperatura em Celsius\n ");
    scanf("%f", &temperaturaC);

    temperaturaF = temperaturaC - 32;
    temperaturaF = temperaturaF / 1.8;
    printf("a temperatura em Fahrenheit =  %.2f \n", temperaturaF);

    return 0;
}