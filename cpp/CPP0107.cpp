#include <cstdio>
int main() {
    const char* a = "ABBADCCABDCCABD";
    const char* b = "ACCABCDDBBCDDBB";
    int t;
    scanf("%d", &t);
    while (t--) {
        char code[4];
        scanf("%s", code);
        int count = 0;
        const char* ans = code[2] == '1' ? a : b;
        for (int i = 0; i < 15; i++) {
            char c;
            scanf(" %c", &c);
            if (c == ans[i]) count++;
        }

        printf("%.2lf\n", (double)count / 15 * 10);
    }
}
