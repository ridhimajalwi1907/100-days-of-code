#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Traverse diagonals
    for (d = 0; d < rows + cols - 1; d++) {
        for (i = 0; i < rows; i++) {
            j = d - i;

            if (j >= 0 && j < cols) {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}