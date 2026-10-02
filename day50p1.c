/**
 * 100 Days of Code - UPES
 * Day 50: 02 October 2026
 * Problem 1 (Q99 - Strings)
 * 
 * Question:
 * Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */
#include <stdio.h>

int main() {
    int dd, yyyy;

    scanf("%d/04/%d", &dd, &yyyy);

    printf("%02d-Apr-%d", dd, yyyy);

    return 0;
}