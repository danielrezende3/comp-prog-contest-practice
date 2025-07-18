// time-taken: 20
// tag: NO_IDEA
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>

void solve() {
  // n será o tamanho total das questões
  // m será a qnt de testes em que o a_i não existe
  // k será a qnt de questões que monorepo sabe resolver

  // "Monocarp will pass only if he knows all questions from the list."
  // Então é pra supor que se m != k já é zero para todos os m testes?
  // Só será válido se k = n-1?
  ll n, m, k;
  cin >> n >> m >> k;

  vll a(m);
  vll q(k);
  vector<bool> res(n);
  
  for (ll i = 0; i < m; i++) cin >> a[i];
  for (ll i = 0; i < k; i++) cin >> q[i];
  

}

int main() {
  int count;
  cin >> count;
  while (count--) {
    solve();
  }
  return 0;
}
