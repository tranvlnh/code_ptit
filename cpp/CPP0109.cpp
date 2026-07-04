#include <cstdio>
int n;
int col = 0;

void gen(int len, int curr, int chan, int le) {
    if (len == n) {
        printf("%d ", curr);
        col++;
        if (col == 10) {
            printf("\n");
            col = 0;
        }
        return;
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0 && chan < n / 2) {
            gen(len + 1, curr * 10 + i, chan + 1, le);
        } else if (i % 2 != 0 && le < n / 2) {
            gen(len + 1, curr * 10 + i, chan, le + 1);
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            gen(1, i, 1, 0);
        } else {
            gen(1, i, 0, 1);
        }
    }
}
