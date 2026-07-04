#include <cstdio>

bool solve() {
    char s[10];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != '0' && s[i] != '6' && s[i] != '8') {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        if (solve()) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
