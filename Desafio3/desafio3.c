#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    srand(time(0));
    
    int n, chance, x, soma;
    int i;
    int j;
    int valorDigitado;

    printf("Tamanho do terreno:");
    scanf("%d", &valorDigitado);
    
    for (i = 0; i < valorDigitado; i++){
        for (j = 0; j < valorDigitado; j++){
            chance = rand() % 10;
            if(chance < 1) {
                x = 1 + rand() % 9;
                soma = soma + x;
                printf("%d ", x);
            
            }else{
                printf(". ");
            }
      
        }
        printf("\n");
    }
    if(soma >0){
        printf("%d recurso coletados.", soma);
    }else{
        printf("%d recursos coletados",soma);
    }

}