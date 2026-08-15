/**
 * 100 Days of Code - UPES
 * Day 6: 15 August 2026
 * Problem 2 (Q12 - Conditional Statements)
 * 
 * Question:
 * Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.
 */
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.");
        } else {
            printf("The number is positive.");
        }
    } else {
        printf("The number is negative.");
    }

    return 0;
}