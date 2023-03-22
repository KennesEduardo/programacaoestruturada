#include<stdio.h>

void main() { 

    int vitoriaA, derrotaA, empateA;
    float totalJogos, percentualV, percentualD, percentualE;

    printf("Digite a quantidade de vitorias da equipe ALFA:\n ");
    scanf("%d", &vitoriaA);

    printf("Digite a quantidade de derrotas da equipe ALFA:\n ");
    scanf("%d", &derrotaA);

    printf("Digite a quantidade de empates da equipe ALFA:\n ");
    scanf("%d", &empateA);


    totalJogos = vitoriaA + empateA + derrotaA;
    percentualV = (vitoriaA / totalJogos) * 100;
    percentualD = (derrotaA / totalJogos) * 100;
    percentualE = (empateA / totalJogos) * 100;
   
   
    printf("A Equipe ALFA tem:\n %d vitorias e um percentaul de %.2f% \n %d derrotas e um percentaul de %.2f % \n %d empates e um percentaul de %2.f\n ", vitoriaA, percentualV, derrotaA, percentualD, empateA, percentualE);

    return 0;
}