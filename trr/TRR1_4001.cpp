#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, b;
  cin >> n >> b;
  vector<int> a(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> c[i];
  }

  vector<vector<int>> dp(n + 1, vector<int>(b + 1, 0));

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= b; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j >= a[i - 1]) {
        dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i - 1]] + c[i - 1]);
      }
    }
  }

  cout << dp[n][b] << '\n';
  vector<int> res(n, 0);
  int j = b;
  for (int i = n; i > 0; i--) {
    if (dp[i][j] != dp[i - 1][j]) {
      res[i - 1] = 1;
      j -= a[i - 1];
    }
  }
  for (int i = 0; i < n; i++) {
    cout << res[i] << ' ';
  }
  cout << '\n';

  return 0;
}
