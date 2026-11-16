/**
 * 100 Days of Code - UPES
 * Day 95: 16 November 2026
 * Problem 1 (Q145 - Struct)
 * 
 * Question: Return a structure containing top student's details from a function.
 */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student arr[], int n) {
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[best].marks) {
            best = i;
        }
    }
    return arr[best];
}

int main() {
    int n = 3;
    struct Student students[3] = {
        {"Riya", 101, 89},
        {"Karan", 102, 96},
        {"Meena", 103, 92}
    };

    // Try reading user input if provided
    for (int i = 0; i < 3; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            break;
        }
    }

    struct Student top = getTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}