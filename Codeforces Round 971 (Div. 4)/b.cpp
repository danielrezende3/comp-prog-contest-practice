#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int count;
  cin >> count;
  vector<int> res;
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < 4; j++) {
      char a;
      cin >> a;
      if (a == '#') {
        res.push_back(j + 1);
      }
    }
  }
  for (int i = res.size() - 1; i >= 0; i--) {
    cout << res[i] << " ";
  }

  cout << "\n";
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
