/**
 * 100 Days of Code - UPES
 * Day 4: 13 August 2026
 * Problem 1 (Q7 - User Inputs, Operations & Output)
 * 
 * Question:
 * Write a program to swap two numbers without using a third variable.
 */
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Before swapping : a = %d, b = %d\n",a,b);
    printf("After swapping : a = %d, b = %d\n",b,a);
    return 0;
}