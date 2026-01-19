#include <cstdio>
#include <utility>

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) { return (a / gcd(a, b)) * b; }

void solve() {
    int n;
    scanf("%d", &n);
    long long ans = 1;
    for (long long i = 2; i <= n; i++) {
        ans = lcm(ans, i);
    }
    printf("%lld\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}
