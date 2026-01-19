#include <cstdio>
void solve() {
    int m, n, a, b;
    scanf("%d %d %d %d", &m, &n, &a, &b);

    int count = 0;
    for (int i = m; i <= n; i++) {
        if (i % a == 0 || i % b == 0) count++;
    }
    printf("%d\n", count);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }
}
