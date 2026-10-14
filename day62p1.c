#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum, maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sum = arr[0];
    maxSum = arr[0];

    for (i = 1; i < n; i++) {
        if (sum + arr[i] < arr[i]) {
            sum = arr[i];
        } else {
            sum = sum + arr[i];
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}