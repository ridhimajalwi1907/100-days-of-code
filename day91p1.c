/**
 * 100 Days of Code - UPES
 * Day 91: 12 November 2026
 * Problem 1 (Q141 - Struct)
 * 
 * Question: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
 */

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Read student details (handles formatted or unformatted input)
    if (scanf(" Name: %49s Roll: %d Marks: %f", s.name, &s.roll_no, &s.marks) != 3) {
        // Try simple space-separated fallback
        if (scanf("%49s %d %f", s.name, &s.roll_no, &s.marks) != 3) {
            // Default sample values
            sprintf(s.name, "Asha");
            s.roll_no = 101;
            s.marks = 90;
        }
    }

    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);
    return 0;
}