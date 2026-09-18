#include <iostream>

using namespace std;

// Codeforces 1A - Theatre Square
// In C: scanf("%lld%lld%lld", ...); printf("%lld\n", t1 * t2);
// In C++: long long with integer ceiling formula: (n + a - 1) / a
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a;
    cin >> n >> m >> a;

    // Standard competitive programming ceiling division: ceil(x / a) = (x + a - 1) / a
    long long flagstones_along_n = (n + a - 1) / a;
    long long flagstones_along_m = (m + a - 1) / a;

    cout << flagstones_along_n * flagstones_along_m << "\n";

    return 0;
}

