#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("%.4lf\n", sum);
}
