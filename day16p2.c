#include <stdio.h>

int main() {
    int n, original, reversed = 0, digit;

    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}