#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int width = 60;
    int height = 100;

    FILE *fp = fopen("color_image.ppm", "wb");
    fprintf(fp, "P6\n%d %d\n255\n", width, height);

    srand(time(NULL));
    int y, x;

    for ( y = 0; y < height; ++y) {
        for ( x = 0; x < width; ++x) {
            int r, g, b;
            if (y < 20) {
                r = rand() % 56;
                g = rand() % 56;
                b = rand() % 56;
            } else if (y < 40) {
                r = rand() % 61 + 45;
                g = rand() % 61 + 45;
                b = rand() % 61 + 45;
            } else if (y < 60) {
                r = rand() % 61 + 95;
                g = rand() % 61 + 95;
                b = rand() % 61 + 95;
            } else if (y < 80) {
                r = rand() % 61 + 145;
                g = rand() % 61 + 145;
                b = rand() % 61 + 145;
            } else {
                r = rand() % 61 + 195;
                g = rand() % 61 + 195;
                b = rand() % 61 + 195;
            }

            fputc(r, fp);
            fputc(g, fp);
            fputc(b, fp);
        }
    }

    fclose(fp);
    return 0;
}

