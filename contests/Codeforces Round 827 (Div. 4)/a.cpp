#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int count;
  cin >> count;
  int first, second, third;
  for (size_t i = 0; i < count; i++) {
    cin >> first >> second >> third;
    if (first + second == third) {
      cout << "YES" << endl;
    } else if (first + third == second) {
      cout << "YES" << endl;
    } else if (second + third == first) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
