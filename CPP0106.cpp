#include <cstdio>
#include <cstring>

bool check() {
    char s[20];
    scanf("%s", s);

    int l = 0;
    int r = strlen(s) - 1;

    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        if (check()) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
