/**
 * 100 Days of Code - UPES
 * Day 92: 13 November 2026
 * Problem 1 (Q142 - Struct)
 * 
 * Question: Store details of 5 students in an array of structures and print all.
 */

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5] = {
        {"Asha", 101, 85},
        {"Ravi", 102, 92},
        {"Sita", 103, 78},
        {"Aman", 104, 88},
        {"Neha", 105, 95}
    };

    // Try reading user input if provided
    for (int i = 0; i < 5; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            break;
        }
    }

    printf("%-10s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}