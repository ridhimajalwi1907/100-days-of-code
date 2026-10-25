#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("info.txt", "r");

    while (fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}