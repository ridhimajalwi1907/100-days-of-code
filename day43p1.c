#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    // Print in reverse
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}