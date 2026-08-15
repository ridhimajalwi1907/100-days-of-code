/**
 * 100 Days of Code - UPES
 * Day 6: 15 August 2026
 * Problem 1 (Q11 - Conditional Statements)
 * 
 * Question:
 * Write a program to input an integer and check whether it is even or odd using ifâ€“else.
 */
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is even.");
    } else {
        printf("The number is odd.");
    }

    return 0;
}