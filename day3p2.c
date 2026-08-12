/**
 * 100 Days of Code - UPES
 * Day 3: 12 August 2026
 * Problem 2 (Q6 - User Inputs, Operations & Output)
 * 
 * Question:
 * Write a program to swap two numbers using a third variable.
 */
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Before swapping : a = %d, b = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping : a = %d, b = %d\n",a,b);
    return 0;
}