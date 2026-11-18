/**
 * 100 Days of Code - UPES
 * Day 97: 18 November 2026
 * Problem 1 (Q147 - Binary File Handling)
 * 
 * Question: Store employee data in a binary file using fwrite() and read using fread().
 */

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee empWrite = {"Raj", 101, 75000.0f};
    struct Employee empRead;

    // Optional user input
    scanf("%49s %d %f", empWrite.name, &empWrite.id, &empWrite.salary);

    // Write to binary file
    FILE *fpWrite = fopen("employee.bin", "wb");
    if (fpWrite == NULL) {
        printf("Error creating binary file.\n");
        return 1;
    }
    fwrite(&empWrite, sizeof(struct Employee), 1, fpWrite);
    fclose(fpWrite);

    // Read from binary file
    FILE *fpRead = fopen("employee.bin", "rb");
    if (fpRead == NULL) {
        printf("Error reading binary file.\n");
        return 1;
    }
    fread(&empRead, sizeof(struct Employee), 1, fpRead);
    fclose(fpRead);

    printf("Name: %s | ID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);
    return 0;
}