#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  string text;
  cin >> text;
  if (text.length() >= 2) {
    cout << text.replace(text.length() - 2, 2, "i") << "\n";
  } else {
    cout << "i" << "\n";
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
