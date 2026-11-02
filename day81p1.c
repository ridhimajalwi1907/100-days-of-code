/**
 * 100 Days of Code - UPES
 * Day 81: 02 November 2026
 * Problem 1 (Q131 - Enum)
 * 
 * Question: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
 */

#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (int d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}