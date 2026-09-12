/**
 * 100 Days of Code - UPES
 * Day 30: 12 September 2026
 * Problem 1 (Q59 - Arrays (1D))
 * 
 * Question:
 * Count even and odd numbers in an array.
 */
#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);

    return 0;
}