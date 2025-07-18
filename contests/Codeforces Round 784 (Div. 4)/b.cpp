#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  int count, value, freq, resp = -1;
  cin >> count;
  unordered_map<int, int> mp;
  for (int i = 0; i < count; i++) {
    cin >> value;
    freq = ++mp[value];
    if (freq == 3) {
      resp = value;
    }
  }
  cout << resp << endl;
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
