#include <cmath>
#include <cstdio>
void solve() {
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%.4lf\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        solve();
    }
}
