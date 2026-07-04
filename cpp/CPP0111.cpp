#include <cstdio>
#include <cstdlib>
#include <cstring>

bool solve() {
    char s[20];
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 1; i < n - 1; i++) {
        if (abs(s[i] - s[i - 1]) != 1 || abs(s[i] - s[i + 1]) != 1)
            return false;
    }
    return true;
}

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        if (solve())
            printf("YES\n");
        else
            printf("NO\n");
    }
}
