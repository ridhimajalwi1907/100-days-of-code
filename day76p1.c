/**
 * 100 Days of Code - UPES
 * Day 76: 28 October 2026
 * Problem 1 (Q126 - File Handling)
 * 
 * Question:
 * Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
 */
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist.");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}