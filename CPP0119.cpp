#include <cstdio>

void solve() {
    int n;
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("0\n");
        return;
    }

    int k = 0;
    while (n % 2 == 0) {
        k++;
        n /= 2;
    }
    int soUocLe = 1;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            soUocLe *= (count + 1);
        }
    }

    if (n > 1) {
        soUocLe *= 2;
    }

    printf("%d\n", k * soUocLe);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
