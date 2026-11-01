/**
 * 100 Days of Code - UPES
 * Day 80: 01 November 2026
 * Problem 1 (Q130 - File Handling)
 * 
 * Question: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
 * Then read them using fscanf() and display each record.
 */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n = 2;
    struct Student students[2] = {
        {"Asha", 101, 85},
        {"Ravi", 102, 92}
    };

    // Writing to students.txt
    FILE *fout = fopen("students.txt", "w");
    if (fout == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fout, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fout);

    // Reading from students.txt
    FILE *fin = fopen("students.txt", "r");
    if (fin == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char name[50];
    int roll, marks;
    while (fscanf(fin, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fin);
    return 0;
}