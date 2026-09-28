#include <stdio.h>

int main() {
    int dd, yyyy;

    scanf("%d/04/%d", &dd, &yyyy);

    printf("%02d-Apr-%d", dd, yyyy);

    return 0;
}