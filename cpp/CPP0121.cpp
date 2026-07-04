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
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld %lld\n", lcm(a, b), gcd(a, b));
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}
