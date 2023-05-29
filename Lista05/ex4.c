#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  
  int v[8], n, i, m30 = 0, s = 0, s2 = 0;
  srand(time(NULL));

  for (i = 0; i < 8; i++) {
    v[n] = rand() % 50;
    s = s + v[n];
    printf("%d ", v[n]);
    if(v[n] > 30) {
    m30++;
    s2 += v[n];
   }
  }


  printf("\nQuantidade de números acima de 30: %d\n", m30);
  printf("Soma dos números acima de 30: %d\n", s2);
  printf("Soma de todos os números do vetor: %d\n", s);
   
