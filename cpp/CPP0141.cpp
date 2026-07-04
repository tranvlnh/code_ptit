#include <algorithm>
#include <climits>
#include <cstdio>
#include <vector>
std::vector<long long> fibs;

void init() {
    long long f0 = 0;
    long long f1 = 1;
    fibs.push_back(f0);
    fibs.push_back(f1);

    long long max = LLONG_MAX;
    while (max - f0 > f1) {
        auto f = f0 + f1;
        fibs.push_back(f);
        f0 = f1;
        f1 = f;
    }
}

void solve() {
    long long n;
    scanf("%lld", &n);
    if (std::binary_search(fibs.begin(), fibs.end(), n))
        printf("YES\n");
    else
        printf("NO\n");
}

int main() {
    init();
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}
