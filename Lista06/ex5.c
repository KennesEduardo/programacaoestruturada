#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j;
  int matriz[10][10], maior = matriz[0][0], menor = matriz[0][0];
  srand(time(NULL));

 for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
         matriz[i][j] = rand() % 101;
         printf("%3d ", matriz[i][j]);
      if (matriz[i][j] > maior){
        maior = matriz[i][j];
      } 
      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
    }
        printf("\n");
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
  return 0;
}