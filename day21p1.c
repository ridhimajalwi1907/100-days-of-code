#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    n = n - first * digits;
    n = n - last;
    n = n + last * digits;
    n = n + first;

    printf("Number after swapping = %d", n);

    return 0;
}