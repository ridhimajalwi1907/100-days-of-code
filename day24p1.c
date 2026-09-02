/**
 * 100 Days of Code - UPES
 * Day 24: 02 September 2026
 * Problem 1 (Q47 - Nested Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print the following pattern:
 * *
 * **
 * ***
 * ****
 * *****
 */
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}