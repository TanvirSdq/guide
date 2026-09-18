#include <iostream>

using namespace std;

// Codeforces 4A - Watermelon
// In C: scanf("%d", &p); if (p < 101 && p > 2 && p % 2 == 0) ...
// In C++: cin / cout and fast I/O.
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;

    // An even number > 2 can always be split into two positive even integers
    if (w > 2 && w % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

