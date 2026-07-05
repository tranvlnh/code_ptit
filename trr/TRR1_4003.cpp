#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> a;
vector<int> result;
vector<int> x;
vector<bool> used;
long long fopt = LLONG_MAX, f = 0;

void backtrack(int i) {
  if (i == n) {
    if (f < fopt) {
      fopt = f;
      result = x;
    }
    return;
  }

  for (int j = 0; j < n; j++) {
    if (!used[j]) {
      x[i] = j;
      used[j] = true;
      f += a[i][j];
      if (f < fopt) {
        backtrack(i + 1);
      }
      f -= a[i][j];
      used[j] = false;
    }
  }
}

int main() {
  cin >> n;
  a.resize(n, vector<int>(n));
  x.resize(n);
  result.resize(n);
  used.resize(n, false);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  backtrack(0);
  cout << fopt << endl;
  for (int i = 0; i < n; i++) {
    cout << result[i] + 1 << " ";
  }
  cout << endl;
}
