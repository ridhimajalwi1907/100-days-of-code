/**
 * 100 Days of Code - UPES
 * Day 79: 31 October 2026
 * Problem 1 (Q129 - File Handling)
 * 
 * Question: A file numbers.txt contains a list of integers separated by spaces. 
 * Read all integers, compute their sum and average, and print both.
 */

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        float avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    } else {
        printf("No numbers found in file.\n");
    }

    return 0;
}