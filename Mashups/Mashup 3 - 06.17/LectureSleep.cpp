#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vi a(n), t(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (t[i]) ans += a[i];
    }

    ll maxSum = 0, currSum = 0;
    for (int i = 0; i < k; i++) {
        if (!t[i]) currSum += a[i];
    }
    maxSum = currSum;

    for (int i = k; i < n; i++) {
        if (!t[i]) currSum += a[i];
        if (!t[i - k]) currSum -= a[i - k];
        maxSum = max(maxSum, currSum);
    }

    cout << ans + maxSum << endl;
    return 0;
}