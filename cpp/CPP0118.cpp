#include <cstdio>
void solve() {
    int n;
    scanf("%d", &n);

    int cout = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout++;
            n /= i;

            if (n % i == 0) {
                printf("0\n");
                return;
            }
        }
    }
    if (n > 1) cout++;
    if (cout == 3)
        printf("1\n");
    else
        printf("0\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}
