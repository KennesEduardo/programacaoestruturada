#include <stdio.h>

void printRomanNumerals(int input, FILE *file);


int main() {
	int i;
    FILE *file = fopen("numRomanos.txt", "w");
    for ( i = 1; i <= 50; i++) {
        fprintf(file, "%d : ", i);
        printRomanNumerals(i, file);
        fprintf(file, "\n");
    }
    fclose(file);
    return 0;
}

void printRomanNumerals(int input, FILE *file) {
    while (input >= 1000) {
        fprintf(file, "M");
        input -= 1000;
    }
    while (input >= 900) {
        fprintf(file, "CM");
        input -= 900;
    }
    while (input >= 500) {
        fprintf(file, "D");
        input -= 500;
    }
    while (input >= 400) {
        fprintf(file, "CD");
        input -= 400;
    }
    while (input >= 100) {
        fprintf(file, "C");
        input -= 100;
    }
    while (input >= 90) {
        fprintf(file, "XC");
        input -= 90;
    }
    while (input >= 50) {
        fprintf(file, "L");
        input -= 50;
    }
    while (input >= 40) {
        fprintf(file, "XL");
        input -= 40;
    }
    while (input >= 10) {
        fprintf(file, "X");
        input -= 10;
    }
    while (input >= 9) {
        fprintf(file, "IX");
        input -= 9;
    }
    while (input >= 5) {
        fprintf(file, "V");
        input -= 5;
    }
    while (input >= 4) {
        fprintf(file, "IV");
        input -= 4;
    }
    while (input >= 1) {
        fprintf(file, "I");
        input -= 1;
    }
}

