#include<stdio.h>

void main() {

    float vida, ataque, defesa, xp;

    printf("Digite a quantidade de vida do jogador:\n ");
    scanf("%f", &vida);
    printf("Digite a quantidade de ataque do jogador:\n ");
    scanf("%f", &ataque);
    printf("Digite a quantidade de defesa do jogador:\n ");
    scanf("%f", &defesa);

    xp = (vida + ataque + defesa) / 3;
    if (xp >= 0 && xp <= 25) {
        printf("jogador novato ");
    }else if (xp >= 26 && xp <= 50) {
        printf("jogador mago");
    } else if (xp >= 51 && xp <= 75) {
        printf("jogador mago supremo");
    }else if (xp >= 76 && xp <= 100) {
        printf("jogador lorde das magias");
    } else {
        printf("OMG esse jogador tem um poder incalculavel");
    }

    return 0;
}