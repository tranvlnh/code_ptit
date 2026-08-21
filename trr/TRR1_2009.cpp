#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int t = 1;
    for (int b = 1; b <= n; b++) {
        for (int a = 1; a <= b; a++) {
            if (__gcd(a, b) == 1) {
                t++;
            }
        }
    }
    cout << t << '\n';
}
