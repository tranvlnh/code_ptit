#include <cstdio>

const int MAX = 10001;
int minPrime[MAX];

void sieve() {
    for (int i = 1; i < MAX; i++) {
        minPrime[i] = i;
    }

    for (int i = 2; i * i < MAX; i++) {
        if (minPrime[i] == i) {
            for (int j = i * i; j < MAX; j += i) {
                if (minPrime[j] == j) {
                    minPrime[j] = i;
                }
            }
        }
    }
}

void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", minPrime[i]);
    }
    printf("\n");
}

int main() {
    sieve();

    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
