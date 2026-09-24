#include <stdio.h>

int main() {
    char str[100];
    int i, count[26] = {0};

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2) {
                printf("First repeating alphabet: %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet");

    return 0;
}