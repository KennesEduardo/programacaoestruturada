#include <stdio.h>
#include <stdlib.h>


int main() {

    srand(time(NULL));
    int numSecreto = rand() % 100 + 1;
    int num; 

    printf("%i \n", numSecreto);

    printf("Digite um numero de 1 a 100: X1 ");
    scanf("%d", &num);

    if (num < 1 || num > 100) {
        printf("Numero invalido. Tente novamente.\n");
        printf("Digite um numero de 1 a 100: ");
        scanf("%d", &num);
        
    }

    if (num < 1 || num > 100) {
        printf("Numero invalido. Tente novamente.\n");
        printf("Digite um numero de 1 a 100:\n Se nao o programa vai encerrar ");
        scanf("%d", &num);
        
    }

    if (num < 1 || num > 100) {
        return 0;  
    }
 
    if (num == numSecreto) {
        printf("Senha correta! Acesso garantido!\n");
        return 0;
    }else if (num > numSecreto) {
        printf("A senha e menor do que o valor inserido\n");

    }else {
        printf("A senha e maior do que o valor inserido\n");

    }

    printf("Digite um numero de 1 a 100:X2 ");
    scanf("%d", &num);

    if (num == numSecreto) {
        printf("Senha correta! Acesso garantido!\n");
        return 0;
    }else if (num > numSecreto) {
        printf("A senha e menor do que o valor inserido\n");

    }else {
        printf("A senha e maior do que o valor inserido\n");

    }

    printf("Digite um numero de 1 a 100:X3 ");
    scanf("%d", &num);
        
    if (num == numSecreto) {
        printf("Senha correta! Acesso garantido!\n");
        return 0;
    }else if (num > numSecreto) {
        printf("A senha e menor do que o valor inserido\n");

    }else {
        printf("A senha e maior do que o valor inserido\n");

    }

    printf("Digite um numero de 1 a 100:X4 ");
    scanf("%d", &num);
        
    if (num == numSecreto) {
        printf("Senha correta! Acesso garantido!\n");
        return 0;
    }else if (num > numSecreto) {
        printf("A senha e menor do que o valor inserido\n");

    }else {
        printf("A senha e maior do que o valor inserido\n");

    }
    printf("Digite um numero de 1 a 100:X5 ");
    scanf("%d", &num);
        
    if (num == numSecreto) {
        printf("Senha correta! Acesso garantido!\n");
        return 0;
    }else if (num > numSecreto) {
        printf("A senha e menor do que o valor inserido\n");

    }else {
        printf("A senha e maior do que o valor inserido\n");

    }
   
    printf("Senha incorreta. Numero de tentativas excedido!\n");


}