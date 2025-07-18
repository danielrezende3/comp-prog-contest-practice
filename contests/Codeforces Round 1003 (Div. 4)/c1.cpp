#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n, m, value;
  cin >> n;
  cin >> m;
  vector<int> vn;
  vector<int> vm;
  vector<tuple<int, int> > pos;
  for (int i = 0; i < n; i++) {
    cin >> value;
    vn.push_back(value);
  }
  for (int i = 0; i < m; i++) {
    cin >> value;
    vm.push_back(value);
  }

  for (int i = 0; i < n; i++) {
    value = vm[0] - vn[i];
    int min_value = min(value, vn[i]);
    int max_value = max(value, vn[i]);
    pos.push_back(make_tuple(min_value, max_value));
  }
  int old_value = get<0>(pos[0]);
  for (int i = 1; i < n; i++) {
    int min_value = get<0>(pos[i]);
    int max_value = get<1>(pos[i]);
    if (min_value >= old_value) {
      old_value = min_value;
    } else if (max_value >= old_value) {
      old_value = max_value;
    } else {
      cout << "NO" << "\n";
      return;
    }
  }
  cout << "YES" << "\n";
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }

  return 0;
}
