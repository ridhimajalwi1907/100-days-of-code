/**
 * 100 Days of Code - UPES
 * Day 29: 11 September 2026
 * Problem 1 (Q57 - Arrays (1D))
 * 
 * Question:
 * Find the sum of array elements.
 */
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}