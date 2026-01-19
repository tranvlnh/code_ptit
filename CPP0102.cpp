#include <cstdio>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char c;
        scanf(" %c", &c);
        if (c >= 'a' && c <= 'z')
            printf("%c\n", c - 32);
        else if (c >= 'A' && c <= 'Z')
            printf("%c\n", c + 32);
    }
}
