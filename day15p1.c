/**
 * 100 Days of Code - UPES
 * Day 15: 24 August 2026
 * Problem 1 (Q29 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to calculate the factorial of a number.
 */
#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("%lld", fact);

    return 0;
}