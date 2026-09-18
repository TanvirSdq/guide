#include <iostream>
#include <cmath>

using namespace std;

// Codeforces 263A - Beautiful Matrix
// In C: int m[5][5]; nested loop scanf, then nested loop search for 1
// In C++: find coordinates directly during input without even saving full matrix
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val;
    int r = 0, c = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            if (val == 1) {
                r = i;
                c = j;
            }
        }
    }

    // Manhattan distance from (r, c) to center (2, 2)
    cout << abs(r - 2) + abs(c - 2) << "\n";

    return 0;
}

