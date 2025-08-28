#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int dp[1000][1000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; cin >> n >> m;
    for(int i = 1 ; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i == j){
                dp[i][j] = 0;
                continue;
            }
            dp[i][j] = INT_MAX;
            for(int k = 1; k < i; k++) {
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j] + 1);
            }
            for(int k = 1; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
            }
        }
    }

    cout << dp[n][m] << endl;
    
    return 0;
}