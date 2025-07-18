#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll a, b;
  cin >> a >> b;
  ll min_value = LONG_LONG_MAX;
  for (ll c = a; c <= b; c++) {
    ll pos_value = (c - a) + (b - c);
    if (pos_value <= min_value) {
      min_value = pos_value;
    }
  }
  cout << min_value << "\n";
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
