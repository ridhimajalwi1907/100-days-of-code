/**
 * 100 Days of Code - UPES
 * Day 38: 20 September 2026
 * Problem 2 (Q76 - 2D Arrays)
 * 
 * Question:
 * Check if a matrix is symmetric.
 */
#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j, symmetric = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;
}