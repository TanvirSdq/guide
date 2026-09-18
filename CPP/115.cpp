#include <iostream>

using namespace std;

// Codeforces 50A - Domino piling
// In C: scanf("%d %d", &M, &N); printf("%d\n", (M*N)/2);
// In C++: clean cin/cout
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    // Each domino covers 2 squares of the M x N board
    cout << (m * n) / 2 << "\n";

    return 0;
}

