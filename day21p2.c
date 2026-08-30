/**
 * 100 Days of Code - UPES
 * Day 21: 30 August 2026
 * Problem 2 (Q42 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to check if a number is a perfect number.
 */
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);

    return 0;
}