/**
 * 100 Days of Code - UPES
 * Day 24: 02 September 2026
 * Problem 2 (Q48 - Nested Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print the following pattern:
 * 1
 * 12
 * 123
 * 1234
 * 12345
 */
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}