#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long x;
    if (!(cin >> n >> x)) return;

    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Find all divisors of x strictly greater than 1
    vector<long long> divs;
    for (long long d = 1; d * d <= x; ++d) {
        if (x % d == 0) {
            if (d > 1) {
                divs.push_back(d);
            }
            if (x / d > 1 && x / d != d) {
                divs.push_back(x / d);
            }
        }
    }

    // For each divisor d, sum all arr[i] divisible by d
    long long ans = 0;
    for (long long d : divs) {
        long long total = 0;
        for (long long a : arr) {
            if (a % d == 0) {
                total += a;
            }
        }
        ans = max(ans, total);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}
