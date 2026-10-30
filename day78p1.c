/**
 * 100 Days of Code - UPES
 * Day 78: 30 October 2026
 * Problem 1 (Q128 - File Handling)
 * 
 * Question: Read a text file and count how many vowels and consonants are in the file. 
 * Ignore digits and special characters.
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100] = "text.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        // Fallback: try reading from user if file not found
        printf("Enter filename (default: text.txt): ");
        if (scanf("%s", filename) == 1) {
            fp = fopen(filename, "r");
        }
    }

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}