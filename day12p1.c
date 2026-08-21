/**
 * 100 Days of Code - UPES
 * Day 12: 21 August 2026
 * Problem 1 (Q23 - Conditional Statements)
 * 
 * Question:
 * Write a program to calculate library fine based on late days as follows: 
 * First 5 days late: â‚¹2/day 
 * Next 5 days late: â‚¹4/day 
 * Next 20 days days late: â‚¹6/day 
 * More than 30 days: Membership Cancelled.
 */
#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = Rs. %d", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = Rs. %d", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = Rs. %d", fine);
    }
    else {
        printf("Membership Cancelled");
    }

    return 0;
}