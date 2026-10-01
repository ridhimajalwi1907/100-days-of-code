#include <stdio.h>

int main() {
    int n, i;
    int total = 0, left = 0, pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for (i = 0; i < n; i++) {
        total = total - arr[i];

        if (left == total) {
            pivot = i;
            break;
        }

        left = left + arr[i];
    }

    printf("Pivot index = %d", pivot);

    return 0;
}