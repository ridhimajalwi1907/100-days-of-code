/**
 * 100 Days of Code - UPES
 * Day 36: 18 September 2026
 * Problem 1 (Q71 - 2D Arrays)
 * 
 * Question:
 * Read and print a matrix.
 */
#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}