// time-taken: 20
// tag: PARTIAL
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>

void help_solve(vll *a, ll threshold, ll){


}

void solve() {
  ll n, min, y, res = 0, sum = 0, j = 0;
  cin >> n >> min >> y;
  vll a(n);

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a.begin(), a.end());

  for (int i = n - 1; i >= 0; i--) {
    while (j < n && sum - a[i] - a[j] >= min) j++;
    res += (n - j);
  }

  for (ll i = 0; i < n; i++)
    if (sum - a[i] - a[i] < min) res--;

  cout << res / 2 << "\n";
}

int main() {
  int count;
  cin >> count;
  while (count--) {
    solve();
  }
  return 0;
}
