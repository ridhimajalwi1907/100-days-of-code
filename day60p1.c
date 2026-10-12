/**
 * 100 Days of Code - UPES
 * Day 60: 12 October 2026
 * Problem 1 (Q110 - Logic Enhancers)
 * 
 * Question:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 */
#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        max = arr[i];

        for (j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}
