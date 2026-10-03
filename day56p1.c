#include <stdio.h>

int main() {
    int n, i, j, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        result[i] = -1;
        found = 0;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                found = 1;
                break;
            }
        }
    }

    printf("Next greater elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}