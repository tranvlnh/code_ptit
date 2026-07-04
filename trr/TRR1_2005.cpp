#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
  ll n;
  cin >> n;

  ll curr = 0;
  ll t = 0;
  while (true) {
    ll need = t * t;
    if (curr + need > n)
      break;
    curr += need;
    t++;
  }

  cout << t - 1;
}
