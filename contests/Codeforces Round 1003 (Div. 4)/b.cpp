#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  string text;
  cin >> text;
  for (int i = 0; i < (int)(text.length() - 1); i++) {
    if (text[i] == text[i + 1]) {
      cout << 1 << "\n";
      return;
    }
  }
  cout << text.length() << "\n";
}

int main() {
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    solve();
  }

  return 0;
}
