#include <stdio.h>

int main() {
    int width = 60;
    int height = 100;

    FILE *fp = fopen("gray_image.pgm", "wb");
    fprintf(fp, "P5\n%d %d\n255\n", width, height);
    int y, x, i;

    for (y = 0; y < height; ++y) {
        for (x = 0; x < width; ++x) {
            int color;
            if (x < 12) {
                color = 0;
            } else if (x < 24) {
                color = 64;
            } else if (x < 36) {
                color = 128;
            } else if (x < 48) {
                color = 192;
            } else {
                color = 255;
            }

            for (i = 0; i < 20; ++i) {
                fputc(color, fp);
            }
        }
    }

    fclose(fp);
    return 0;
}

