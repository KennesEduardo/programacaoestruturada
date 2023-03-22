#include <stdio.h>

int main() {
    int classe, regiao, arma;
    char* nomeClasse;
    char* nomeRegiao;
    char* nomeArma;
    
    printf("Escolha a sua classe:\n");
    printf("1 - Guerreiro\n");
    printf("2 - Mago\n");
    printf("3 - Druida\n");
    printf("4 - Sacerdote\n");
    scanf("%d", &classe);
    
    printf("Escolha a sua regiao:\n");
    printf("1 - Azeroth\n");
    printf("2 - Azkaban\n");
    printf("3 - Aurora\n");
    printf("4 - Brightwood\n");
    scanf("%d", &regiao);
    
    printf("Escolha a sua arma:\n");
    printf("1 - Machado cego\n");
    printf("2 - Picareta invertida\n");
    printf("3 - Adaga sem ponta\n");
    printf("4 - Corrente sem elo\n");
    scanf("%d", &arma);
    
    switch(classe) {
        case 1:
            nomeClasse ="Guerreiro";
            break;
        case 2:
            nomeClasse = "Mago";
            break;
        case 3:
            nomeClasse = "Druida";
            break;
        case 4:
            nomeClasse = "Sacerdote";
            break;
        default:
            printf("classe invalida! Digite novamente \n");
            break;
    }

    switch(regiao) {
        case 1:
            nomeRegiao = "Azeroth";
            break;
        case 2:
            nomeRegiao = "Azkaban";
            break;
        case 3:
            nomeRegiao = "Aurora";
            break;
        case 4:
           nomeRegiao = "Brightwood";
            break;
        default:
            printf("regiao invalida! Digite novamente \n");
            break;
    }

    switch(arma) {
        case 1:
            nomeArma = "Machado cego";
            break;
        case 2:
            nomeArma = "Picareta invertida";
            break;
        case 3:
            nomeArma = "Adaga sem ponta";
            break;
        case 4:
           nomeArma = "Corrente sem elo";
            break;
        default:
            printf("Arma invalida! Digite novamente \n");
            break;
    }

    printf("Voce agora e um %s da regiao de %s armado com um %s.", nomeClasse, nomeRegiao, nomeArma);

}    