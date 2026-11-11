/**
 * 100 Days of Code - UPES
 * Day 90: 11 November 2026
 * Problem 1 (Q140 - Enum)
 * 
 * Question: Define a struct with enum Gender and print person's gender.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

void printGender(enum Gender g) {
    switch (g) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
}

int main() {
    struct Person p;
    strcpy(p.name, "Alex");
    p.gender = MALE;

    char input[50];
    if (scanf("%49s", input) == 1) {
        for (int i = 0; input[i]; i++) input[i] = toupper(input[i]);
        if (strstr(input, "FEMALE")) p.gender = FEMALE;
        else if (strstr(input, "MALE")) p.gender = MALE;
        else if (strstr(input, "OTHER")) p.gender = OTHER;
    }

    printGender(p.gender);
    return 0;
}