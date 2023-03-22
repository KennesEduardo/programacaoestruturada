#include<stdio.h>

void main (){

    float temperaduraC;
    float temperaturaF;


    printf("Digite a temperatura em Celsius\n ");
    scanf("%f", &temperaduraC);

    temperaturaF = (temperaduraC * 1.8) + 32;
    printf("a temperatura em Fahrenheit =  %.2f \n", temperaturaF);

    return 0;
}