#include <bits/stdc++.h>

const int INF = 1e9 + 7;
using namespace std;
using ll = long long;
int main(int argc, char const *argv[]) {
    int n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    vector<ll> dp(n, INF);
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < min(i, k) + 1; j++) {
            dp[i] = min(dp[i], dp[i - j] + abs(h[i - j] - h[i]));
        }
    }
    cout << dp[n - 1] << "\n";
    return 0;
}
