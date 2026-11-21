/**
 * 100 Days of Code - UPES
 * Day 100: 21 November 2026
 * Problem 1 (Q150 - Pointer to Struct)
 * 
 * Question: Use pointer to struct to modify and display data using -> operator.
 */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void modifyStudent(struct Student *ptr, const char *newName, int newRoll, int newMarks) {
    strcpy(ptr->name, newName);
    ptr->roll = newRoll;
    ptr->marks = newMarks;
}

int main() {
    struct Student s;
    struct Student *ptr = &s;

    // Initial values
    strcpy(ptr->name, "Anonymous");
    ptr->roll = 0;
    ptr->marks = 0;

    char newName[50] = "John";
    int newRoll = 106;
    int newMarks = 91;

    // Try reading user input
    scanf("%49s %d %d", newName, &newRoll, &newMarks);

    // Modify using pointer and arrow operator
    modifyStudent(ptr, newName, newRoll, newMarks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}