/**
 * 100 Days of Code - UPES
 * Day 13: 22 August 2026
 * Problem 1 (Q25 - Conditional Statements)
 * 
 * Question:
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;

        case '-':
            printf("Result: %d\n", a - b);
            break;

        case '*':
            printf("Result: %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Division by zero is not allowed\n");
            break;

        case '%':
            if (b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Modulo by zero is not allowed\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}