#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("%lld", product);

    return 0;
}