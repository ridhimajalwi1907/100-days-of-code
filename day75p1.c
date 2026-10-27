/**
 * 100 Days of Code - UPES
 * Day 75: 27 October 2026
 * Problem 1 (Q125 - File Handling)
 * 
 * Question:
 * Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
 */
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], text[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully.");

    return 0;
}