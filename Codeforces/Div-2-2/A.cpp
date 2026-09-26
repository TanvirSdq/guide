#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Bank(){
int n, k;
cin >> n >> k;

vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));
for (int i = 1; i <= n; ++i) 
    dp[i][1] = 1LL << i;

    for (int j = 2; j <= k; ++j) {
        for (int i = j; i <= n; ++i) {
            for (int p = 1; p <= i; ++p) {
                dp[i][j] = max(dp[i][j], dp[p][j - 1] + (1LL << (i - p)));
            }
        }
    }

long long ans = 0;
for (int i = 1; i <= n; ++i) {
    ans = max(ans, dp[i][k]);
}
cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            Bank();
        }
    }

    return 0;
}