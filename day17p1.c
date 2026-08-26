/**
 * 100 Days of Code - UPES
 * Day 17: 26 August 2026
 * Problem 1 (Q33 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to check if a number is an Armstrong number.
 */
#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        result = result + remainder * remainder * remainder;
        num = num / 10;
    }

    if (result == original) {
        printf("Armstrong number");
    } else {
        printf("Not an Armstrong number");
    }

    return 0;
}