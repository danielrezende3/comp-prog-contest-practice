// time-taken: 20
// tag: PARTIAL
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>

void solve() {
  ll n, x, y, res = 0;
  cin >> n >> x >> y;
  vll a(n);
  for (ll i = 0; i < n; i++) cin >> a[i];

  // if you simultaneously remove the elements at positions i and j from the
  // sequence a, the sum of the remaining elements is at least x and at most y. 

  // A ideia seria calcular todos pares possíveis que não sejam repetidos
  // Dai fazer sum(a) - par, if (true) then res++ 

  // mabe count the frequency of them, then calculate their differences?
  // If I have freq 6:2

  // possible combinations: (1,2), (1,3), (1,4), (2,3), (2,4), (3,4)

  // {3:1, 4:1, 6:2}
  // sorted = 3 4 6 6
  // x = 8
  // y = 10
  // total=19
  // pos(1,2)=4+6=10-19=09
  // pos(1,4)=4+6=10-19=09
  // pos(2,3)=6+3=09-19=10
  // pos(3,4)=3+6=09-19=10
}

int main() {
  int count;
  cin >> count;
  while (count--) {
    solve();
  }
  return 0;
}
