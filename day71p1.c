/**
 * 100 Days of Code - UPES
 * Day 71: 23 October 2026
 * Problem 1 (Q121 - File Handling)
 * 
 * Question:
 * Write a C program that creates a text file named info.txt in write mode. The program should take the userâ€™s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 */
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data saved successfully.");

    return 0;
}