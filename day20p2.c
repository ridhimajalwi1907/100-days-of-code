/**
 * 100 Days of Code - UPES
 * Day 20: 29 August 2026
 * Problem 2 (Q40 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to find the 1â€™s complement of a binary number and print it.
 */
#include <stdio.h>

int main() {
    long long n, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %lld", complement);

    return 0;
}