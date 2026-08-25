/**
 * 100 Days of Code - UPES
 * Day 16: 25 August 2026
 * Problem 2 (Q32 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to check if a number is a palindrome.
 */
#include <stdio.h>

int main() {
    int n, original, reversed = 0, digit;

    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}