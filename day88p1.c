/**
 * 100 Days of Code - UPES
 * Day 88: 09 November 2026
 * Problem 1 (Q138 - Enum)
 * 
 * Question: Print all enum names and integer values using a loop.
 */

#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN,
    COLOR_COUNT
};

int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}