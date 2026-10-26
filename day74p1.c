/**
 * 100 Days of Code - UPES
 * Day 74: 26 October 2026
 * Problem 1 (Q124 - File Handling)
 * 
 * Question:
 * Take two filenames from the user â€“ a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 */
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], destination[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    dest = fopen(destination, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.");

    fclose(src);
    fclose(dest);

    return 0;
}