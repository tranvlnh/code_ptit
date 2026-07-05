#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  while (k--) {
    bool f = false;
    for (int i = n - 1; i >= 0; i--) {
      if (a[i] == 1) {
        a[i] = 0;
        for (int j = i + 1; j < n; j++) {
          a[j] = 1;
        }
        f = true;
        break;
      }
    }

    if (!f) {
      cout << "0\n";
      return 0;
    }

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
}
