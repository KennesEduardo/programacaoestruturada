#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, v[4], d = 0, n, t = 0;
  srand(time(NULL));

  for (i = 0; i < 4; i++) {
    v[i] = i;
    v[i] = rand() % 2;
    printf("%d", v[i]);
  }

  for(i = 0; i < 4; i++){
    d += v[i] * pow(2, 3 - i);
  }
  

  printf("\nInforme o n�mero decimal do n�mero bin�rio gerado: ");

  do {
    t++;

    scanf("%d", &n);

    if(n != d){
      printf("Voc� Errou!! Tente Novamente\n");
    }
    else if(n == d) {
    printf("Parab�ns voc� acertou!!\n");
    return 0;
   }
  } while(t < 3);


  printf("\nPassando valor bin�rio para decimal: %d\n", d);

  return 0;
}
