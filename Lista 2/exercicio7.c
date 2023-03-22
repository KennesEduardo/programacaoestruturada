// Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe a quantidade de latas de tinta a serem compradas e o preço tota

#include<stdio.h>

void main (){

    float tamanho, litrosUsados, lata, preco;
    int latas;

    printf("Digite o tamanho em metros quadrados da area a ser pintada \n ");
    scanf("%f", &tamanho);

    litrosUsados = tamanho / 3.0;
    lata = litrosUsados / 18.0;

    latas = (int)lata; //arredondando para cima caso.
    if (lata > latas) {
        latas++;
    }

    printf("quantidade de latas de tinta a serem compradas e = %d \n ", latas);

    preco = latas * 80.0;
    printf("preço total e = %.2f \n ", preco);

    return 0;
}
