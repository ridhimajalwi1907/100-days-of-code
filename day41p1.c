/**
 * 100 Days of Code - UPES
 * Day 41: 23 September 2026
 * Problem 1 (Q81 - Strings)
 * 
 * Question:
 * Count characters in a string without using built-in length functions.
 */
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != '\n') {
            count++;
        }
        i++;
    }

    printf("Number of characters = %d", count);

    return 0;
}