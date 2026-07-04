#include <cstdio>
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int n;
int count = 0;
void tang(int len, int curr, int last) {
    if (len == n) {
        if (isPrime(curr)) count++;
        return;
    }
    for (int i = last + 1; i < 10; i++) {
        tang(len + 1, curr * 10 + i, i);
    }
}

void giam(int len, int curr, int last) {
    if (len == n) {
        if (isPrime(curr)) count++;
        return;
    }
    for (int i = last - 1; i >= 0; i--) {
        giam(len + 1, curr * 10 + i, i);
    }
}

void solve() {
    count = 0;
    scanf("%d", &n);
    for (int i = 1; i < 10; i++) {
        tang(1, i, i);
        giam(1, i, i);
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
