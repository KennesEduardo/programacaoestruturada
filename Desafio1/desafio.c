#include<stdio.h>

int main () {
    float distancia1, distancia2, tempo;
    float velocidadeLuz = 299792458.0;
    
    printf("Digite a distancia entro os dois planetas em KM:\n");
    scanf("%f", &distancia1);
        
    distancia2 = distancia1 * 1000;
    tempo = distancia2 / velocidadeLuz;

    printf("Distancia em segundos: %lf\n", tempo);

    tempo = tempo / 60;
    printf("Distancia em minutos: %lf\n", tempo);

    tempo = tempo / 60;
    printf("Distancia em horas: %lf\n", tempo);
    
    return 0;
}