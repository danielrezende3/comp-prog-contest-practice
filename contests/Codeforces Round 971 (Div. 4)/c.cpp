#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  ld x, y, k;
  cin >> x >> y >> k;
  ll x_jumps = ceil(x / k);
  ll y_jumps = ceil(y / k);

  ll r;
  if (x_jumps > y_jumps) {
    r = 2 * x_jumps - 1;
  } else {
    r = 2 * y_jumps;
  }

  cout << r << "\n";
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
