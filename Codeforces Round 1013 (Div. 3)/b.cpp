#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  ll count, min;
  cin >> count >> min;
  vector<ll> v(count);
  for (ll i = 0; i < count; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  
  ll size = 1;
  ll res = 0;
  for (ll i = 0; i < count; i++, size++) {
    if (v[i] * size >= min) {
      res++;
      size = 0;
    }
  }
  cout << res << endl;
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
