#!/usr/bin/env bash
set -e

usage() {
  echo "Usage: $0 <contest-folder-name> <num-of-problems|last-problem-letter>"
  echo " e.g.: $0 \"Codeforces Round 1025 (Div. 3)\" 5"
  echo "       $0 \"Codeforces Round 1025 (Div. 3)\" e"
  exit 1
}

if [[ $# -ne 2 ]]; then
  usage
fi

contest="$1"
arg="$2"

if [[ "$arg" =~ ^[0-9]+$ ]]; then
  n=$arg
elif [[ "$arg" =~ ^[A-Za-z]$ ]]; then
  ascii=$(printf '%d' "'${arg^^}")
  n=$((ascii - 64))
else
  usage
fi

if ((n < 1 || n > 26)); then
  echo "Error: number of problems must be between 1 and 26."
  exit 1
fi

mkdir -p "$contest"
pushd "$contest" >/dev/null

for ((i = 0; i < n; i++)); do
  ascii=$((97 + i))
  letter=$(printf '%b' "\\x$(printf '%x' "$ascii")")
  touch "${letter}.cpp" "${letter}.input"
  cat >"${letter}.cpp" <<'EOF'
// time-taken:
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double

void solve() {
    
}

int main() {
    int count;
    cin >> count;
    while (count--) {
        solve();
    }
    return 0;
}
EOF
done

popd >/dev/null
echo "Created $n problems in $contest/"
