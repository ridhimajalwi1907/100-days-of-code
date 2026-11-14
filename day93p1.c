/**
 * 100 Days of Code - UPES
 * Day 93: 14 November 2026
 * Problem 1 (Q143 - Struct)
 * 
 * Question: Find and print the student with the highest marks.
 */

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n = 3;
    struct Student students[10] = {
        {"Ravi", 101, 95},
        {"Sita", 102, 85},
        {"Aman", 103, 88}
    };

    // Attempt to read custom count and students if provided
    int inputCount;
    if (scanf("%d", &inputCount) == 1 && inputCount > 0 && inputCount <= 10) {
        n = inputCount;
        for (int i = 0; i < n; i++) {
            scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
        }
    } else {
        // Check if 3 students given directly without count
        for (int i = 0; i < 3; i++) {
            if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
                break;
            }
        }
    }

    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIdx].marks) {
            topIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topIdx].name, students[topIdx].marks);
    return 0;
}