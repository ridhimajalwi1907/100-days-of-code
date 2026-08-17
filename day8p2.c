/**
 * 100 Days of Code - UPES
 * Day 8: 17 August 2026
 * Problem 2 (Q16 - Conditional Statements)
 * 
 * Question:
 * Write a program to input three numbers and find the largest among them using ifâ€“else.
 */
#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest number
    if (a >= b && a >= c) {
        printf("The largest number is %d", a);
    }
    else if (b >= a && b >= c) {
        printf("The largest number is %d", b);
    }
    else {
        printf("The largest number is %d", c);
    }

    return 0;
}