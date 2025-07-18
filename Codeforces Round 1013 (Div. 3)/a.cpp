#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int countTrue(vector<bool> e) {
  int count = 0;
  for (auto &&i : e) {
    if (i) ++count;
  }
  return count;
}

void solve() {
  vector<bool> e(6, false);
  vector<ll> r = {3, 1, 2, 1, -1, 1, -1, -1, -1, -1};
  vector<ll> v(10, 0);
  ll count, value, res = 0;

  cin >> count;

  for (ll i = 0; i < count; i++) {
    cin >> value;
    if (r[value] != -1 && ++v[value] == r[value]) {
      e[value] = true;
    }
    if (countTrue(e) == 5 && !res) {
      res = i + 1;
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