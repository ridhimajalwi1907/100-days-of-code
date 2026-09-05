/**
 * 100 Days of Code - UPES
 * Day 27: 05 September 2026
 * Problem 1 (Q53 - Nested Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print the following pattern:
 * *
 * ***
 * *****
 * *******
 * *********
 * *******
 * *****
 * ***
 * *
 */
#include <stdio.h>

int main() {
    int i, j;

    // Increasing stars
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing stars
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}