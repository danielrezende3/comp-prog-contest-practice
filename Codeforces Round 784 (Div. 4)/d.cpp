#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve() {
  ll count;
  cin >> count;

  if (count <= 1) {
    cout << "NO" << endl;
    return;
  }
  string target;
  cin >> target;
  string bpart = "BR";
  string rpart = "RB";
  for (ll i = 2; i < count; i++) {
    string partial = target.substr(0, i);
    if (partial == bpart) {
      bpart = bpart.substr(0, i - 1) + "BR";
      rpart = bpart.substr(0, i - 1) + "RB";
    } else if (partial == rpart) {
      bpart = rpart.substr(0, i - 1) + "BR";
      rpart = rpart.substr(0, i - 1) + "RB";
    }
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
