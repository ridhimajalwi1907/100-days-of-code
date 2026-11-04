/**
 * 100 Days of Code - UPES
 * Day 83: 04 November 2026
 * Problem 1 (Q133 - Enum)
 * 
 * Question: Create an enum for months and print how many days each month has.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

void printMonthDays(enum Month m) {
    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
}

int main() {
    char input[20];
    if (scanf("%19s", input) == 1) {
        for (int i = 0; input[i]; i++) input[i] = toupper(input[i]);
        if (strncmp(input, "JAN", 3) == 0) printMonthDays(JAN);
        else if (strncmp(input, "FEB", 3) == 0) printMonthDays(FEB);
        else if (strncmp(input, "MAR", 3) == 0) printMonthDays(MAR);
        else if (strncmp(input, "APR", 3) == 0) printMonthDays(APR);
        else if (strncmp(input, "MAY", 3) == 0) printMonthDays(MAY);
        else if (strncmp(input, "JUN", 3) == 0) printMonthDays(JUN);
        else if (strncmp(input, "JUL", 3) == 0) printMonthDays(JUL);
        else if (strncmp(input, "AUG", 3) == 0) printMonthDays(AUG);
        else if (strncmp(input, "SEP", 3) == 0) printMonthDays(SEP);
        else if (strncmp(input, "OCT", 3) == 0) printMonthDays(OCT);
        else if (strncmp(input, "NOV", 3) == 0) printMonthDays(NOV);
        else if (strncmp(input, "DEC", 3) == 0) printMonthDays(DEC);
        else printf("Invalid input\n");
    } else {
        printMonthDays(FEB);
    }
    return 0;
}