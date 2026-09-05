/**
 * 100 Days of Code - UPES
 * Day 27: 05 September 2026
 * Problem 2 (Q54 - Nested Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print the following pattern:
 * 
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 * 
 */
#include <stdio.h>

int main() {
    int i, j;

    // Upper half
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}