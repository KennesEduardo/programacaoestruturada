// Faça um código que receba o raio de um círculo, calcule o seu perímetro e sua área e mostre ao usuário.

#include<stdio.h>
void main (){

    float raio, perimetro, area;
    float pi = 3.14;

    printf("Digite o raio: \n ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    printf("perimetro  e =  %.2f \n", perimetro);

    area = pi * (raio * raio);

    printf("area e = %.2f \n", area);

    return 0;
}