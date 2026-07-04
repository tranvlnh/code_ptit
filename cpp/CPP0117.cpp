#include <cstdio>

void solve() {
    long long n;
    scanf("%lld", &n);

    do {
        long long sum = 0;
        while (n > 9) {
            sum += n % 10;
            n /= 10;
        }
        sum += n;
        n = sum;
    } while (n > 9);

    printf("%lld\n", n);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }
}
