#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, b;
ll wei[100], val[100];
ll ans = LLONG_MIN;
vector<ll> best;
void backtrack(ll i, ll w, ll v, vector<ll> &used_time) {
  if (i > n) {
    if (v > ans) {
      ans = v;
      best = used_time;
    }
    return;
  }
  backtrack(i + 1, w, v, used_time);
  if (w + wei[i] <= b) {
    used_time[i]++;
    backtrack(i + 1, w + wei[i], v + val[i], used_time);
    used_time[i]--;
  }
}

int main() {
  cin >> n >> b;
  for (int i = 1; i <= n; i++) {
    cin >> wei[i] >> val[i];
  }
  vector<ll> used_time(n + 1, 0);
  best.assign(n + 1, 0);
  backtrack(1, 0, 0, used_time);
  cout << ans << endl;
  for (int i = 1; i <= best.size() - 1; i++) {
    cout << best[i] << " ";
  }
}
