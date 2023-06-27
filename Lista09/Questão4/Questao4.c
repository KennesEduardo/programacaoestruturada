#include <stdio.h>

int main()
{
    int i, j, k;
    FILE *fp;

    for (k = 0; k < 10; k++) {
        char filename[10];
        sprintf(filename, "%d.pbm", k);
        fp = fopen(filename, "w");
        fprintf(fp, "P1\n");
        fprintf(fp, "7 10\n");

        for (i = 0; i < 10; i++) {
            for (j = 0; j < 7; j++) {
                if ((k == 0 && (j == 0 || j == 6 || i == 0 || i == 9)) ||
                    (k == 1 && (j == 3 || i == 0 || i == 9)) ||
                    (k == 2 && ((j == 0 || j == 6) && (i != 0 && i != 9)) ||
                                ((i == 0 || i == 4 || i == 9) && (j > 0 && j < 6)))) {
                    fprintf(fp, "1 ");
                } else {
                    fprintf(fp, "0 ");
                }
            }
            fprintf(fp, "\n");
        }

        fclose(fp);
    }

    return 0;
}

