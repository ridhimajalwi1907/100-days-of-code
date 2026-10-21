
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, len, max = 0, count;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        int visited[256] = {0};
        count = 0;

        for (j = i; j < len; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}
