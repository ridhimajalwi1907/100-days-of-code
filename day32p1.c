#include <stdio.h>

int main() {
    int n1, n2, i;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    printf("Merged array:\n");

    for (i = 0; i < n1; i++) {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n2; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}