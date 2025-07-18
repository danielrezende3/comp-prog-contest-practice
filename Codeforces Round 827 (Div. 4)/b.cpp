#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int count, count_j, number;
  cin >> count;
  for (int i = 0; i < count; i++) {
    cin >> count_j;
    vector<int> numbers(count_j);
    set<int> unique_numbers;
    for (int j = 0; j < count_j; j++) {
      cin >> number;
      numbers[j] = number;
      unique_numbers.insert(number);
    }
    if (numbers.size() == unique_numbers.size()) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}