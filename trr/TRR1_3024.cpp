#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> res;
vector<bool> used;
bool found = false;
void backtrack(int i) {
  if (i > n) {
    for (int j = 1; j <= n; j++) {
      cout << res[j] << ' ';
    }
    cout << '\n';
    found = true;
    return;
  }
  for (int j = 1; j <= n; j++) {
    if (!used[j]) {
      res[i] = j;
      used[j] = true;
      backtrack(i + 1);
      used[j] = false;
    }
  }
}
int main() {
  int k;
  cin >> n >> k;
  res = vector<int>(n + 1, -1);
  used = vector<bool>(n + 1, false);
  for (int i = 0; i < k; i++) {
    int u, v;
    cin >> u >> v;

    if (u < 1 || u > n || v < 1 || v > n) {
      cout << 0;
      return 0;
    }
    if (used[v]) {
      cout << 0;
      return 0;
    }
    res[u] = v;
    used[v] = true;
  }
  backtrack(1);
  if (!found) {
    cout << 0;
  }
  return 0;
}
