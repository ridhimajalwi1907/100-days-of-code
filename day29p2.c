/**
 * 100 Days of Code - UPES
 * Day 29: 11 September 2026
 * Problem 2 (Q58 - Arrays (1D))
 * 
 * Question:
 * Find the maximum and minimum element in an array.
 */
#include <stdio.h>

int main() {
    int arr[5], i;
    int max, min;

    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}