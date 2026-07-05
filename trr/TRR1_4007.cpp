#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> a;
vector<int> best, path;
vector<bool> visited;
long long fopt = LLONG_MAX, f = 0, cmin = LLONG_MAX;

void backtrack(int i) {
  if (i == n) {
    if (f + a[path[i - 1]][0] < fopt) {
      fopt = f + a[path[i - 1]][0];
      best = path;
    }
    return;
  }
  for (int j = 0; j < n; j++) {
    if (!visited[j]) {
      visited[j] = true;
      path[i] = j;
      f += a[path[i - 1]][j];
      if (f + cmin * (n - i + 1) < fopt) {
        backtrack(i + 1);
      }
      f -= a[path[i - 1]][j];
      visited[j] = false;
    }
  }
}

int main() {
  cin >> n;
  a.resize(n, vector<int>(n));
  best.resize(n);
  path.resize(n);
  visited.resize(n, false);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      if (i != j)
        cmin = min(cmin, (long long)a[i][j]);
    }
  }
  path[0] = 0;
  visited[0] = true;
  backtrack(1);
  cout << fopt << '\n';
  for (int i = 0; i < n; i++) {
    cout << best[i] + 1 << ' ';
  }
  cout << '\n';
}
