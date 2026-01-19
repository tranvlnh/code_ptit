#include <cstdio>

const long long perfectNumbers[] = {6,
                                    28,
                                    496,
                                    8128,
                                    33550336,
                                    8589869056LL,
                                    137438691328LL,
                                    2305843008139952128LL};

void solve() {
    long long n;
    scanf("%lld", &n);

    bool check = false;
    for (int i = 0; i < 8; i++) {
        if (n == perfectNumbers[i]) {
            check = true;
            break;
        }
    }

    if (check) {
        printf("1\n");
    } else {
        printf("0\n");
    }
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
