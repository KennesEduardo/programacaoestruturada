#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int width = 60;
    int height = 100;

    FILE *fp = fopen("gray_image.pgm", "wb");
    fprintf(fp, "P5\n%d %d\n255\n", width, height);
    
    int y, x;

    srand(time(NULL));

    for ( y = 0; y < height; ++y) {
        for ( x = 0; x < width; ++x) {
            int color;
            if (y < 20) {
                color = rand() % 56;
            } else if (y < 40) {
                color = rand() % 61 + 45;
            } else if (y < 60) {
                color = rand() % 61 + 95;
            } else if (y < 80) {
                color = rand() % 61 + 145;
            } else {
                color = rand() % 61 + 195;
            }

            fputc(color, fp);
        }
    }

    fclose(fp);
    return 0;
}

