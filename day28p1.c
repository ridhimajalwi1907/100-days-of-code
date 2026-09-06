/**
 * 100 Days of Code - UPES
 * Day 28: 06 September 2026
 * Problem 1 (Q55 - Nested Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print all the prime numbers from 1 to n.
 */
#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}