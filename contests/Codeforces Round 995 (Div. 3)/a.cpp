// time-taken: 20
// tag: PARTIAL
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>

void solve() {
  ll days_left, diff, n_monocarp_solves = 0, n_stereocarp_solves = 0, res = 0;
  cin >> days_left;
  vll monocarp(days_left);
  vll stereocarp(days_left);

  for (int i = 0; i < days_left; i++) {
    cin >> monocarp[i];
  }
  for (int i = 0; i < days_left; i++) {
    cin >> stereocarp[i];
  }
  // diff = monocarp[i] - stereocarp[i+1]
  // Check if diff > 0
  // then n_monocarp_solves++, n_stereocarp_solves++, res += diff
  for (int i = 0; i < days_left - 1; i++) {
    diff = monocarp[i] - stereocarp[i + 1];
    if (i < days_left - 1 && diff > 0) {
      n_monocarp_solves++;
      n_stereocarp_solves++;
      res += diff;
    }
  }
  res += monocarp[days_left];

  cout << res << "\n";
}

int main() {
  int count;
  cin >> count;
  while (count--) {
    solve();
  }
  return 0;
}
