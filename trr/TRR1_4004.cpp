#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> a;
vector<int> result;
vector<int> x;
int fopt = INT_MIN, f = 0;
vector<bool> used;

void backtrack(int i) {
  if (i == n) {
    if (f > fopt) {
      fopt = f;
      result = x;
    }
    return;
  }
  for (int j = 0; j < n; j++) {
    if (!used[j]) {
      x[i] = j;
      f += a[i][j];
      used[j] = true;
      backtrack(i + 1);
      used[j] = false;
      f -= a[i][j];
    }
  }
}

int main() {
  cin >> n;
  a.resize(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  x.resize(n);
  used.resize(n, false);
  backtrack(0);
  cout << fopt << '\n';
  for (int i = 0; i < n; i++) {
    cout << result[i] + 1 << ' ';
  }
  return 0;
}
