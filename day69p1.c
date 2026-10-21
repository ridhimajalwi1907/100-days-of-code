
#include <stdio.h>

int main() {
    int n, i, x;

    scanf("%d", &n);

    int arr[n];
    int freq[100001] = {0};

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        x = arr[i];

        if (freq[x] == 1) {
            printf("%d", x);
            return 0;
        }

        freq[x] = 1;
    }

    return 0;
}
