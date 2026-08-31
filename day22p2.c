/**
 * 100 Days of Code - UPES
 * Day 22: 31 August 2026
 * Problem 2 (Q44 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms.
 */
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum = sum + 1;
        else
            sum = sum + (float)(2 * i - 1) / (2 * i);

    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}