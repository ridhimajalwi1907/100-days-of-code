/**
 * 100 Days of Code - UPES
 * Day 10: 19 August 2026
 * Problem 1 (Q19 - Conditional Statements)
 * 
 * Question:
 * Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 */
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Validation check
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is VALID.\n");

        // Classification
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("It is an Isosceles Triangle.\n");
        } else {
            printf("It is a Scalene Triangle.\n");
        }

        // Right-angled check
        if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            printf("It is also a Right-angled Triangle.\n");
        }

    } else {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}
