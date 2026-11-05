/**
 * 100 Days of Code - UPES
 * Day 84: 05 November 2026
 * Problem 1 (Q134 - Enum)
 * 
 * Question: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void handleStatus(enum Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }
}

int main() {
    char input[20];
    if (scanf("%19s", input) == 1) {
        for (int i = 0; input[i]; i++) input[i] = toupper(input[i]);
        if (strcmp(input, "SUCCESS") == 0) handleStatus(SUCCESS);
        else if (strcmp(input, "FAILURE") == 0) handleStatus(FAILURE);
        else if (strcmp(input, "TIMEOUT") == 0) handleStatus(TIMEOUT);
        else printf("Invalid input\n");
    } else {
        handleStatus(FAILURE);
    }
    return 0;
}