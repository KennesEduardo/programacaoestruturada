#include<stdio.h>

void main() {

    float tamanhoMB, velocidade, tempo;

    printf("Digite o tamanho de um arquivo em MB\n ");
    scanf("%f", &tamanhoMB);

    printf("Digite a velocidade da sua internet em MBPS\n ");
    scanf("%f", &velocidade);

    tempo = tamanhoMB / (velocidade / 8);

    tempo = tempo / 60;
    printf("o tempo de dowload do arquivo em minutos e %.2f\n ", tempo);
    return 0;
}