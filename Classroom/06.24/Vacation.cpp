#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    vector<vector<ll>> activities(n, vector<ll>(3));
    for(ll i = 0; i < n; i++){
        cin >> activities[i][0] >> activities[i][1] >> activities[i][2];
    }

    vector<vector<ll>> dp(n, vector<ll>(3, 0));
    for(int j = 0; j < 3; j++) dp[0][j] = activities[0][j];

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            dp[i][j] = activities[i][j] + max(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]);
        }
    }

    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]}) << endl;
    return 0;
}