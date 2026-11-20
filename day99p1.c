/**
 * 100 Days of Code - UPES
 * Day 99: 20 November 2026
 * Problem 1 (Q149 - Dynamic Struct)
 * 
 * Question: Use malloc() to allocate structure memory dynamically and print details.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(s->name, "Tina");
    s->roll = 105;
    s->marks = 88;

    // Try reading user input
    scanf("%49s %d %d", s->name, &s->roll, &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    free(s);
    return 0;
}