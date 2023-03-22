// Faça um código que receba dois números (n1 e n2) e um número real (d1), calcule e mostre:
// O produto do dobro do primeiro com metade do segundo;
// A soma do triplo do primeiro com o terceiro;
// O terceiro elevado ao cubo.

#include<stdio.h>
void main (){

    float num1, num2, numReal;
    float resul;

    printf("Digite um numero: \n ");
    scanf("%f", &num1);

    printf("Digite um numero: \n ");
    scanf("%f", &num2);

    printf("Digite um numero real: \n ");
    scanf("%f", &numReal);


    resul = (num1 * 2) + (num2 / 2); 
    printf("O produto do dobro do primeiro com metade do segundo =  %.2f \n", resul);

    resul = (num1 * 3) + numReal; 
    printf("A soma do triplo do primeiro com o terceiro =  %.2f \n", resul);

    resul = numReal * numReal * numReal; 
    printf("O terceiro elevado ao cubo= %.2f \n", resul);

    return 0;
}
