#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  ll n, q;
  cin >> n >> q;

  vector<ll> a(n), ps(1);
  for (ll &r : a) {
    cin >> r;
    ps.push_back(ps.back() + r);
  }
  for (ll &r : a) {
    ps.push_back(ps.back() + r);
  }
  return;
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
