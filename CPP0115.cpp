#include <cstdio>
#include <map>

void solve() {
    int n;
    scanf("%d", &n);

    std::map<int, int> factors;

    while (n % 2 == 0) {
        n /= 2;
        factors[2]++;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            n /= i;
            factors[i]++;
        }
    }
    if (n > 1) {
        factors[n]++;
    }

    for (const auto& factor : factors) {
        printf("%d %d ", factor.first, factor.second);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
