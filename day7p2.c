/**
 * 100 Days of Code - UPES
 * Day 7: 16 August 2026
 * Problem 2 (Q14 - Conditional Statements)
 * 
 * Question:
 * Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.
 */
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character is a vowel.");
    } else {
        printf("The character is a consonant.");
    }

    return 0;
}