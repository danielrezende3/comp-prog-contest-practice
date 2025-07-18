#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  int count, value;
  cin >> count;

  bool is_curr_pos_even_even;
  bool is_curr_pos_odd_even;
  bool is_all_pos_even_equal = true;
  bool is_all_pos_odd_equal = true;
  for (int i = 1; i <= count; i++) {
    cin >> value;
    if (i == 1) {
      is_curr_pos_odd_even = value % 2;
      continue;
    }
    if (i == 2) {
      is_curr_pos_even_even = value % 2;
      continue;
    }
    if (i % 2 == 0 && is_curr_pos_even_even != (value % 2)) {
      is_all_pos_even_equal = false;
    }
    if (i % 2 != 0 && is_curr_pos_odd_even != (value % 2)) {
      is_all_pos_odd_equal = false;
    }
  }
  if (is_all_pos_even_equal && is_all_pos_odd_equal) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }
  return 0;
}
