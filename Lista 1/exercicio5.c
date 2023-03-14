#include<stdio.h> 

int main() { 
    int n1, resul;

    printf("Digite quantos metros voce quer converte:\n");
    scanf("%d", &n1);

    resul = n1 * 100;
    printf("%d em metros em centimetros e:%d \n", n1, resul);
    return 0;
}    