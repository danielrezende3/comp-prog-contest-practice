#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

ll sum_n(ll n, ll k) { return n * (2 * k + n - 1) / 2; }

void solve() {
  ll n, k;
  cin >> n >> k;
  ll total_sum = sum_n(n, k);
  ld b = 2 * k - 1;
  ld delta = b * b + 4 * total_sum;
  ld pos = (-b + sqrt(delta)) / 2;
  ll pos_1 = floor(pos);
  ll pos_2 = pos_1 + 1;
  ll sum_1 = abs(2 * sum_n(pos_1, k) - total_sum);
  ll sum_2 = abs(2 * sum_n(pos_2, k) - total_sum);

  cout << min(sum_1, sum_2) << '\n';
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
