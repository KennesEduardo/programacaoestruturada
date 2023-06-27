#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("labirinto.pbm", "w");
    fprintf(fp, "P1\n11 11\n");
    fprintf(fp, "00000000000\n01111111110\n01000000010\n01011111010\n01010001010\n01010101010\n01010101010\n01010101010\n01010101010\n01111111110\n00000000000");
    fclose(fp);
    return 0;
}

