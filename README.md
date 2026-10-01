# guide

> Tracking my undue survival in The Mortal Realms hardship...

Competitive programming solutions and daily practice exercises in C and C++, focusing on classic problems from Codeforces and university coursework.

## Features

- **Dual Implementations:** Side-by-side C and C++ solutions to compare manual low-level logic with C++ STL utilities.
- **Problem Coverage:** Classic Codeforces problems focusing on strings, math, arrays, matrices, and simulation.
- **Topic Notes:** Dedicated notes on recursion and backtracking algorithms (`CPP/cp.cpp`).

## Structure

- **`CC/`** — Solutions implemented in C (C99).
  - `111.c` — Codeforces 4A (Watermelon)
  - `112.c` — Codeforces 71A (Way Too Long Words)
  - `114.c` — Codeforces 158A (Next Round)
  - `115.c` — Codeforces 50A (Domino piling)
  - `116.c` — Codeforces 1A (Theatre Square)
  - `117.c` — Codeforces 263A (Beautiful Matrix)
  - `118.c` — Codeforces 112A (Petya and Strings)
  - `119.c` — Codeforces 236A (Boy or Girl)
  - `120.c` — Codeforces 339A (Helpful Maths)
  - `121.c` — Codeforces 281A (Word Capitalization)
- **`CPP/`** — C++ equivalents using the STL alongside practice notes.
  - `111.cpp` – `121.cpp`: Corresponding solutions for each problem listed above.
  - `cp.cpp`: Recursion and backtracking notes.
- **`Codeforces/`** — Additional contest sets and problem-solving practice.

## Tech Stack

- **Languages:** C (C99), C++ (C++17)
- **Compilers:** GCC, Clang
- **Platforms:** macOS, Linux
- **Focus:** Transitioning from manual C memory management to C++ STL (`vector`, `string`, `set`, `algorithm`) for competitive programming and university coursework.

## Usage

Compile and run solutions from the repository root:

### C (C99)

```bash
gcc -O2 -std=c99 CC/111.c -o CC/111.out
./CC/111.out
```

### C++ (C++17)

```bash
g++ -O2 -std=c++17 CPP/111.cpp -o CPP/111.out
./CPP/111.out
```
