#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  ll value;
  cin >> value;
  if (value % 2 == 0) {
    cout << -1 << endl;
    return;
  }

  for (int i = value; i >= 1; i--) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}