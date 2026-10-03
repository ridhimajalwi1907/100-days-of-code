/**
 * 100 Days of Code - UPES
 * Day 51: 03 October 2026
 * Problem 1 (Q101 - Logic Enhancers)
 * 
 * Question:
 * Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 */
#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("First occurrence = %d\n", first);
    printf("Last occurrence = %d\n", last);

    return 0;
}