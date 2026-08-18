/**
 * 100 Days of Code - UPES
 * Day 9: 18 August 2026
 * Problem 2 (Q18 - Conditional Statements)
 * 
 * Question:
 * Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
 * 90-100: Grade A 
 * 80-89: Grade B 
 * 70-79: Grade C 
 * 60-69: Grade D 
 * below 60: Grade F.
 */
#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else if (percentage >= 0)
        printf("Grade F");
    else
        printf("Invalid percentage");

    return 0;
}