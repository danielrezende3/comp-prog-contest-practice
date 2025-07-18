#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  ll n, m;
  cin >> n >> m;
  vector<ll> vn(n), vm(m);

  for (ll i = 0; i < n; i++) {
    cin >> vn[i];
  }
  for (ll i = 0; i < m; i++) {
    cin >> vm[i];
  }

  sort(vm.begin(), vm.end());
  ll old_value = min(vn[0], vm[0] - vn[0]);
  for (int i = 1; i < n; i++) {
    ll left = 0;
    ll right = vm.size() - 1;
    ll res = LONG_LONG_MAX;
    while (left <= right) {
      ll mid = (left + right) / 2;
      ll pos_value = vm[mid] - vn[i];
      if (pos_value >= old_value) {
        res = min(res, pos_value);
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }

    int min_v = min(res, vn[i]);
    int max_v = max(res, vn[i]);
    if (min_v >= old_value) {
      old_value = min_v;
    } else if (max_v >= old_value) {
      old_value = max_v;
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
