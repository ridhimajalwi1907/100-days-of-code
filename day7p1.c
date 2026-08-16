/**
 * 100 Days of Code - UPES
 * Day 7: 16 August 2026
 * Problem 1 (Q13 - Conditional Statements)
 * 
 * Question:
 * Write a program to input a year and check whether it is a leap year or not using conditional statements.
 */
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("It is a leap year.");
    } else {
        printf("It is not a leap year.");
    }

    return 0;
}