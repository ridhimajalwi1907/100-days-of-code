/**
 * 100 Days of Code - UPES
 * Day 87: 08 November 2026
 * Problem 1 (Q137 - Enum)
 * 
 * Question: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

void displayRoleMessage(enum Role r) {
    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown Role!\n");
    }
}

int main() {
    char input[20];
    if (scanf("%19s", input) == 1) {
        for (int i = 0; input[i]; i++) input[i] = toupper(input[i]);
        if (strcmp(input, "ADMIN") == 0) displayRoleMessage(ADMIN);
        else if (strcmp(input, "USER") == 0) displayRoleMessage(USER);
        else if (strcmp(input, "GUEST") == 0) displayRoleMessage(GUEST);
        else printf("Invalid role input\n");
    } else {
        displayRoleMessage(GUEST);
    }
    return 0;
}