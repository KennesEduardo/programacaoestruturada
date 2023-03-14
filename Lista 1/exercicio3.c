#include<stdio.h> 

int main() { 
    int num1, dobro, triplo;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num1);
    printf("O numero digitado foi: %d \n", num1);

    dobro = num1 * 2; 
    printf("O seu dobro e: %d \n", dobro);

    triplo = num1 * 3;
    printf("O seu triplo e: %d \n", triplo);
    return 0;
}