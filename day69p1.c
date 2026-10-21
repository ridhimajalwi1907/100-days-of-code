/**
 * 100 Days of Code - UPES
 * Day 69: 21 October 2026
 * Problem 1 (Q119 - Logic Enhancers)
 * 
 * Question:
 * Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 */
#include <stdio.h>

int main() {
    int n, i, x;

    scanf("%d", &n);

    int arr[n];
    int freq[100001] = {0};

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        x = arr[i];

        if (freq[x] == 1) {
            printf("%d", x);
            return 0;
        }

        freq[x] = 1;
    }

    return 0;
}
