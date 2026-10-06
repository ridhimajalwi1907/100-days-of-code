#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int sum = 0, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}