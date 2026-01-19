#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i++) {
        int cout = 0;
        while (n % i == 0) {
            cout++;
            n /= i;
        }
        if (cout > 0) printf("%d %d\n", i, cout);
    }
    if (n > 1) printf("%d 1", n);
}
