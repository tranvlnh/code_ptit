#include <cstdio>
#include <cstdlib>
void solve() {
    int n;
    scanf("%d", &n);
    if (abs(n % 100) == 86)
        printf("1\n");
    else
        printf("0\n");
}

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        solve();
    }
}
