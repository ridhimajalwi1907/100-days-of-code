/**
 * 100 Days of Code - UPES
 * Day 50: 02 October 2026
 * Problem 2 (Q100 - Strings)
 * 
 * Question:
 * Print all sub-strings of a string.
 */
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);

            printf("\n");
        }
    }

    return 0;
}