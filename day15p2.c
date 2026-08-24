/**
 * 100 Days of Code - UPES
 * Day 15: 24 August 2026
 * Problem 2 (Q30 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to reverse a given number.
 */
#include <stdio.h>

int main() {
    int n, reverse = 0, digit;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}