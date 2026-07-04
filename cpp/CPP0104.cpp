#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    long long gt = 1;

    for (int i = 1; i <= n; i++) {
        gt = gt * i;
        sum += gt;
    }

    printf("%lld", sum);
}
