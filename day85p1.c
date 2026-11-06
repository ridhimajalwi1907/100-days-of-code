/**
 * 100 Days of Code - UPES
 * Day 85: 06 November 2026
 * Problem 1 (Q135 - Enum)
 * 
 * Question: Assign explicit values starting from 10 and print them.
 */

#include <stdio.h>

enum CustomEnum {
    A = 10,
    B,
    C
};

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}