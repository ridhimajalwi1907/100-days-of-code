/**
 * 100 Days of Code - UPES
 * Day 4: 13 August 2026
 * Problem 2 (Q8 - User Inputs, Operations & Output)
 * 
 * Question:
 * Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;
}