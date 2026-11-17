/**
 * 100 Days of Code - UPES
 * Day 96: 17 November 2026
 * Problem 1 (Q146 - Struct)
 * 
 * Question: Create Employee structure with nested Date structure for joining date and print details.
 */

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp = {"Raj", 11, {12, 5, 2020}};

    // Try reading user input
    scanf("%49s %d %d %d %d", emp.name, &emp.id, &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id, emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}