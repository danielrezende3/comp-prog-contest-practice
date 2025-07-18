#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define MATRIX_SIZE 8

// true if it was able to input 'R' in the row
// false if 'B' was found
char input_r(char c[][MATRIX_SIZE], uint pos) {
  for (size_t j = 0; j < MATRIX_SIZE; j++) {
    if (c[pos][j] == 'R') {
      continue;
    } else if (c[pos][j] == 'B') {
      return 'B';
    }

    c[pos][j] = 'R';
  }
  return 'R';
}

// true if it was able to input 'B' in the column
// false if 'R' was found
char input_b(char c[][MATRIX_SIZE], uint pos) {
  for (size_t i = 0; i < MATRIX_SIZE; i++) {
    if (c[i][pos] == 'B') {
      continue;
    } else if (c[i][pos] == 'R') {
      return 'R';
    }

    c[i][pos] = 'B';
  }
  return 'B';
}

char read_matrix() {
  char original[MATRIX_SIZE][MATRIX_SIZE];
  char matrix[MATRIX_SIZE][MATRIX_SIZE];
  char value, last;
  for (size_t i = 0; i < MATRIX_SIZE; i++) {
    for (size_t j = 0; j < MATRIX_SIZE; j++) {
      cin >> value;
      original[i][j] = value;
      if (value == 'R') {
        last = input_r(matrix, i);
      } else if (value == 'B') {
        last = input_b(matrix, j);
      }
    }
  }
  return last;
}

int main() {
  uint count;
  cin >> count;
  for (uint i = 0; i < count; i++) {
    char r = read_matrix();
    cout << r << endl;
  }

  return 0;
}
