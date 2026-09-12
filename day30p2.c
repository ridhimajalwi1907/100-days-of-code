/**
 * 100 Days of Code - UPES
 * Day 30: 12 September 2026
 * Problem 2 (Q60 - Arrays (1D))
 * 
 * Question:
 * Count positive, negative, and zero elements in an array.
 */
#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zero);

    return 0;
}