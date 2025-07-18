// time-taken: 20
// tag: TIMEOUT
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>

void solve() {
  ll n_clients, at_most_ng_rvws;
  cin >> n_clients >> at_most_ng_rvws;

  vll price_for_pos_rvw(n_clients);
  vll price_for_neg_rvw(n_clients);
  

  for (auto &&i : price_for_pos_rvw) cin >> i;
  for (auto &&i : price_for_neg_rvw) cin >> i;

  // para cada i-th customer eu sei o price_for_pos_rvw e price_for_neg_rvw mas
  // eu quero ganhar o máx de total de dindin possível mas que
  // n_neg_rvws <= at_most_ng_rvws
  // Nota: O usuário pode decidir não comprar

}

int main() {
  int count;
  cin >> count;
  while (count--) {
    solve();
  }
  return 0;
}
