#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  vector<int> x;
  for (int i = 0; i < n; ++i) {
    if (a[i] || b[i])
      x.push_back(i + 1);
  }
  cout << x.size() << endl;
  if (x.size() > 0) {
    for (int i : x)
      cout << i << ' ';
    cout << endl;
  }
}
