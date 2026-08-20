/**
 * 100 Days of Code - UPES
 * Day 11: 20 August 2026
 * Problem 2 (Q22 - Conditional Statements)
 * 
 * Question:
 * Write a program to find profit or loss percentage given cost price and selling price.
 */
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss, percentage;

    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        profitLoss = sellingPrice - costPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Profit = %.2f%%", percentage);
    }
    else if (costPrice > sellingPrice) {
        profitLoss = costPrice - sellingPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Loss = %.2f%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}