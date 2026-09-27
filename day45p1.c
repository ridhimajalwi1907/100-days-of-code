/**
 * 100 Days of Code - UPES
 * Day 45: 27 September 2026
 * Problem 1 (Q89 - Strings)
 * 
 * Question:
 * Count frequency of a given character in a string.
 */
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}