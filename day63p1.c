/**
 * 100 Days of Code - UPES
 * Day 63: 15 October 2026
 * Problem 1 (Q113 - Logic Enhancers)
 * 
 * Question:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
 */
#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (k >= 1 && k <= n) {
        printf("%d", arr[k - 1]);
    }

    return 0;
}
