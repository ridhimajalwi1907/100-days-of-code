/**
 * 100 Days of Code - UPES
 * Day 89: 10 November 2026
 * Problem 1 (Q139 - Enum)
 * 
 * Question: Show that enums store integers by printing assigned values.
 */

#include <stdio.h>

enum ProcessStatus {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}