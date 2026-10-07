/**
 * 100 Days of Code - UPES
 * Day 55: 07 October 2026
 * Problem 1 (Q105 - Logic Enhancers)
 * 
 * Question:
 * Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 */
#include <stdio.h>

int main() {
    int n, i, j, count, found = 0;

    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j])
                count++;
        }

        if (count > n / 2) {
            printf("%d", nums[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("-1");

    return 0;
}