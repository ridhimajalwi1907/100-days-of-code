/**
 * 100 Days of Code - UPES
 * Day 25: 03 September 2026
 * Problem 2 (Q50 - Nested Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print the following pattern:
 * *****
 *  ****
 *   ***
 *    **
 *     *
 */
#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}