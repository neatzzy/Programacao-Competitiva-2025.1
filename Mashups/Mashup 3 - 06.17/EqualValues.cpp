#include <bits/stdc++.h>

using namespace std;

#define vi vector<long long>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve() {
    ll n; cin >> n;
    vi v(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll ans = LLONG_MAX;

    for(ll i = 0; i < n; ) {
        ll j = i;
        while (j < n and v[j] == v[i]) {
            j++;
        }
        ans = min(ans, ((i + n - j) * v[i]));
        i = j;
    }

    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while(t--) solve();
    
    return 0;
}