#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve(){
    ll n, k; cin >> n >> k;
    ll min = ((n + k - 1) / k) * k;
    cout << (min + n - 1) / n << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}