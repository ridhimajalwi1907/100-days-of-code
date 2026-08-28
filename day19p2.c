/**
 * 100 Days of Code - UPES
 * Day 19: 28 August 2026
 * Problem 2 (Q38 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to find the sum of digits of a number.
 */
#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}