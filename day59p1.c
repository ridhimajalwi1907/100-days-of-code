/**
 * 100 Days of Code - UPES
 * Day 59: 11 October 2026
 * Problem 1 (Q109 - Logic Enhancers)
 * 
 * Question:
 * Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 */
#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int sum = 0, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}