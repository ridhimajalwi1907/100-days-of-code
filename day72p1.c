/**
 * 100 Days of Code - UPES
 * Day 72: 24 October 2026
 * Problem 1 (Q122 - File Handling)
 * 
 * Question:
 * Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 */
#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("info.txt", "r");

    while (fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}