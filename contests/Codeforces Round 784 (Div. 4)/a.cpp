#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  int rating;
  cin >> rating;
  if (rating <= 1399) {
    cout << "Division 4" << endl;
  } else if (rating <= 1599) {
    cout << "Division 3" << endl;
  } else if (rating <= 1899) {
    cout << "Division 2" << endl;
  } else if (rating >= 1900) {
    cout << "Division 1" << endl;
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
