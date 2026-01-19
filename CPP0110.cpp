#include <cstdio>
#include <cstring>

void solve() {
    char s[20];
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n;) {
        if (i <= n - 3 && s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4') {
            i += 3;
        } else {
            printf("%c", s[i]);
            i++;
        }
    }
    printf("\n");
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
