/**
 * 100 Days of Code - UPES
 * Day 13: 22 August 2026
 * Problem 2 (Q26 - Loops without Arrays/Strings)
 * 
 * Question:
 * Write a program to print numbers from 1 to n.
 */
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}