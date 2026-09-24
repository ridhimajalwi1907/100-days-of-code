/**
 * 100 Days of Code - UPES
 * Day 42: 24 September 2026
 * Problem 2 (Q84 - Strings)
 * 
 * Question:
 * Convert a lowercase string to uppercase without using built-in functions.
 */
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}