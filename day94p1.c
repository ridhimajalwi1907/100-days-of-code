/**
 * 100 Days of Code - UPES
 * Day 94: 15 November 2026
 * Problem 1 (Q144 - Struct)
 * 
 * Question: Write a function that accepts a structure as parameter and prints its members.
 */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s = {"Neha", 104, 92};

    // Try reading user input if provided
    scanf("%49s %d %d", s.name, &s.roll, &s.marks);

    printStudent(s);
    return 0;
}