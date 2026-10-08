/**
 * 100 Days of Code - UPES
 * Day 56: 08 October 2026
 * Problem 1 (Q106 - Logic Enhancers)
 * 
 * Question:
 * Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
 * 
 * N.B:
 * - Print the output for each element in a comma separated fashion.
 * - Do not use Stack, use brute force approach (nested loop) to solve.
 */
#include <stdio.h>

int main() {
    int n, i, j, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        result[i] = -1;
        found = 0;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                found = 1;
                break;
            }
        }
    }

    printf("Next greater elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}