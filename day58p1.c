/**
 * 100 Days of Code - UPES
 * Day 58: 10 October 2026
 * Problem 1 (Q108 - Logic Enhancers)
 * 
 * Question:
 * Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 */
#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i, j, product;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        product = 1;

        for(j = 0; j < n; j++) {
            if(i != j)
                product = product * nums[j];
        }

        answer[i] = product;
    }

    printf("Answer array: ");
    for(i = 0; i < n; i++)
        printf("%d ", answer[i]);

    return 0;
}