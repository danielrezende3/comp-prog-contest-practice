# Competitive Programming Practice Repository

This repository contains my solutions to various competitive programming contests, primarily Codeforces rounds across Div. 4, Div. 3, and beyond. It also includes helpers for scaffolding new contests and VS Code integration.

## Repository Structure

Each contest is organized in its own folder, named after the contest and division. For example:

```
.
├── Codeforces Round 1003 (Div. 4)/
│   ├── a.cpp      # Problem A solution
│   ├── a.input    # Sample input for testing
│   ├── b.cpp
│   ├── b.input
│   ├── c1.cpp
│   ├── c1.input
│       ...
├── Codeforces Round 1013 (Div. 3)/
│   ├── a.cpp
│   ├── a.input
│   ├── b.cpp
│   ├── b.input
│       ...
```

Each `.cpp` file implements `solve()` and `main()` to handle one test case (or multiple, as described in the problem). Sample inputs (`*.input`) are provided for quick local testing.

## Creating new contest folders

You can automatically create a new contest folder with boilerplate files using [new_contest.sh](new_contest.sh):

```bash
# Usage: new_contest.sh "<contest-folder-name>" <num-of-problems|last-problem-letter>
./new_contest.sh "Codeforces Round 1025 (Div. 3)" 13
# or
./new_contest.sh "Codeforces Round 1025 (Div. 3)" a
# or 
./new_contest.sh "Codeforces Round 1025 (Div. 3)" Z
```

## How to Build & Run
- **Compile a solution manually:**
  ```bash
  g++-13 -std=c++17 path/to/solution.cpp -O2 -o solution.out
  ./solution.out < path/to/input_file
  ```
- **VS Code Task:** Use the built-in task **C/C++: g++-13 arquivo de build ativo** to compile the current file. It will produce an executable with `.out` suffix in the same directory.
- **VS Code Debug**: Launch via **(gdb) Iniciar** in the debug panel (configured in .vscode/launch.json). It will run the `.out` binary with `< ${fileBasenameNoExtension}.input`.


## Study Resources
I leverage the following platforms to learn algorithms and data structures:
* [CSES Problem Set](https://cses.fi/problemset/)
* [USACO Guide](https://usaco.guide/)
* [NEPS Academy](https://neps.academy/)

## Contest Tracking
A live spreadsheet tracks all contests and problems solved so far:
* [Contest Tracker](http://bit.ly/44OZJYl)
