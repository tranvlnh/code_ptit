#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long* fibs = new long long[93]{1, 1};
    for (int i = 2; i < 93; i++) {
        fibs[i] = fibs[i - 1] + fibs[i - 2];
    }

    int t;
    cin >> t;
    while (t--) {
        int s, e;
        cin >> s >> e;
        for (int i = s - 1; i < e; i++) {
            cout << fibs[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
