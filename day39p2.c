/**
 * 100 Days of Code - UPES
 * Day 39: 21 September 2026
 * Problem 2 (Q78 - 2D Arrays)
 * 
 * Question:
 * Find the sum of main diagonal elements for a square matrix.
 */
#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j, sum = 0;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal
    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}