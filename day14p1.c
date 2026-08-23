/**
 * 100 Days of Code - UPES
 * Day 14: 23 August 2026
 * Problem 1 (Q27 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print the sum of the first n odd numbers.
 */
#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("%d", sum);

    return 0;
}