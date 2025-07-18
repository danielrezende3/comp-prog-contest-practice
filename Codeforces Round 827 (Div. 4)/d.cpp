#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int &x, int &y) {
  // Base Case
  if (a == 0) {
    x = 0;
    y = 1;
    return b;
  }

  int x1, y1;
  int gcd = gcdExtended(b % a, a, x1, y1);

  // Update x and y using results of
  // recursive call
  x = y1 - (b / a) * x1;
  y = x1;
  return gcd;
}

int findGCD(int a, int b) {
  int x = 1, y = 1;
  return gcdExtended(a, b, x, y);
}

int main() {
  unordered_map<string, int> gcd_map;
  int a, b, count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    int size, max_size = -1;
    cin >> size;
    vector<int> arr(size);
    for (int j = 0; j < size; j++) {
      cin >> arr[j];
    }
    for (int j = 0; j < size; j++) {
      for (int k = j; k < size; k++) {
        int min_i = min(arr[j], arr[k]);
        int max_j = max(arr[j], arr[k]);
        int sum = j + k + 2;
        string key = to_string(min_i) + "," + to_string(max_j);
        if (gcd_map.find(key) == gcd_map.end()) {
          gcd_map[key] = findGCD(arr[j], arr[k]);
        }
        if (gcd_map[key] == 1 && sum > max_size) {
          max_size = sum;  // sum of indices + 1
        }
      }
    }
    cout << max_size << endl;
  }
}
