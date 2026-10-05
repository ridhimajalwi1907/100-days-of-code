/**
 * 100 Days of Code - UPES
 * Day 53: 05 October 2026
 * Problem 1 (Q103 - Logic Enhancers)
 * 
 * Question:
 * Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
 */
#include <stdio.h>

int main() {
    int n, i;
    int total = 0, left = 0, pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for (i = 0; i < n; i++) {
        total = total - arr[i];

        if (left == total) {
            pivot = i;
            break;
        }

        left = left + arr[i];
    }

    printf("Pivot index = %d", pivot);

    return 0;
}