#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], destination[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    dest = fopen(destination, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.");

    fclose(src);
    fclose(dest);

    return 0;
}