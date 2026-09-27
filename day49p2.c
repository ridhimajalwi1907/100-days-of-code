#include <stdio.h>

int main() {
    char name[100];
    int i, last = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Result: %c", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            if (name[i + 1] != '\0')
                last = i + 1;
        }
    }

    printf(" ");

    for (i = last; name[i] != '\0' && name[i] != '\n'; i++)
        printf("%c", name[i]);

    return 0;
}