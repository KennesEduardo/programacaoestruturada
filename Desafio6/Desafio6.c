#include <stdio.h>


int main() {
    int a[] = {1, 3, 5, 7, 5, 6, 9, 9, 4};
    int x = 2;
    int y = 5;
    int n = sizeof(a) / sizeof(a[0]);
    int subA[y - x + 1];
    for (int i = x; i <= y; i++) {
        subA[i - x] = a[i];
    }
    for (int i = 0; i < y - x + 1; i++) {
        printf("%d ", subA[i]);
    }
    return 0;
}
