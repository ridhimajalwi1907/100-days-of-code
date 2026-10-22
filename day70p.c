/**
 * 100 Days of Code - UPES
 * Day 70: 22 October 2026
 * Problem 1 (Q120 - File Handling)
 * 
 * Question:
 * Write a program to take a string input. Change it to sentence case.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int i;

    gets(s);

    s[0] = toupper(s[0]);

    for(i = 1; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);

    printf("%s", s);

    return 0;
}