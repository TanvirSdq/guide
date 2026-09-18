#include <iostream>
#include <vector>

using namespace std;

// Codeforces 158A - Next Round
// In C: int a[n]; for(...) scanf("%d", &a[i]);
// In C++: vector<int> a(n); cin >> a[i];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cutoff_score = a[k - 1];
    int count = 0;

    for (int score : a) {
        if (score >= cutoff_score && score > 0) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}

