/**
 * 100 Days of Code - UPES
 * Day 2: 11 August 2026
 * Problem 1 (Q3 - User Inputs, Operations & Output)
 * 
 * Question:
 * Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 */
# include <stdio.h>
int main(){
    int l,b;
    printf("Enter l  :");
    scanf("%d",&l);
    printf("Enter b  :");
    scanf("%d",&b);
    printf("Area of rectangle is %d\n",l*b);
    printf("Perimeter of rectangle is %d",2*(l+b));
    return 0;
}    