#include<stdio.h> 

int main() { 
    int n1, n2, resul;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n2);


    resul = n1 + n2; 
    printf("N1 + N2 =  %d \n", resul);

    resul = n1 - n2;
    printf("N1 - N2 =  %d \n", resul);

    resul = n1 * n2;
    printf("N1 * N2 =  %d \n", resul);
    return 0;
}