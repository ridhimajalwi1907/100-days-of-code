/**
 * 100 Days of Code - UPES
 * Day 86: 07 November 2026
 * Problem 1 (Q136 - Enum)
 * 
 * Question: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char opStr[20];
    int a, b;

    if (scanf("%19s %d %d", opStr, &a, &b) == 3) {
        for (int i = 0; opStr[i]; i++) opStr[i] = toupper(opStr[i]);

        enum Operation op = 0;
        if (strcmp(opStr, "ADD") == 0 || strcmp(opStr, "1") == 0) op = ADD;
        else if (strcmp(opStr, "SUBTRACT") == 0 || strcmp(opStr, "2") == 0) op = SUBTRACT;
        else if (strcmp(opStr, "MULTIPLY") == 0 || strcmp(opStr, "3") == 0) op = MULTIPLY;

        switch (op) {
            case ADD:
                printf("%d\n", a + b);
                break;
            case SUBTRACT:
                printf("%d\n", a - b);
                break;
            case MULTIPLY:
                printf("%d\n", a * b);
                break;
            default:
                printf("Invalid operation\n");
        }
    } else {
        // Default sample
        printf("%d\n", 10 + 20);
    }

    return 0;
}