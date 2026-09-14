/**
 * 100 Days of Code - UPES
 * Day 32: 14 September 2026
 * Problem 2 (Q64 - Arrays (1D))
 * 
 * Question:
 * Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};
    int max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times = %d\n", result);
    printf("Number of occurrences = %d\n", max);

    return 0;
}