// time-taken: 26 
// tag: SOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>

void solve() {
  ll total_kms, a, b, c, cycle, curr_days = 0, n_cycle, runned_kms = 0;
  cin >> total_kms >> a >> b >> c;
  cycle = a + b + c;
  if (total_kms >= cycle) {
    n_cycle = total_kms / cycle;
    runned_kms += n_cycle * cycle;
    curr_days += n_cycle * 3;
  }

  if (runned_kms < total_kms) {
    runned_kms += a;
    curr_days++;
  }
  if (runned_kms < total_kms) {
    runned_kms += b;
    curr_days++;
  }
  if (runned_kms < total_kms) {
    runned_kms += c;
    curr_days++;
  }

  cout << curr_days << "\n";
}

int main() {
  int count;
  cin >> count;
  while (count--) {
    solve();
  }
  return 0;
}
