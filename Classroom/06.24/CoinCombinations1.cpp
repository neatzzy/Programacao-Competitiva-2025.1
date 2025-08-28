#include <bits/stdc++.h>

using namespace std;

#define vi vector<long long>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

const ll MOD = 1e9 + 7;
vi tb(1000001, -1);
vi coins;

ll dp(ll x){
    if(x < 0) return 0;
    if(x == 0) return 1;
    if(tb[x] != -1) return tb[x];

    ll ans = 0;
    for(ll i = 0; i < coins.size(); i++){
        ans += dp(x - coins[i]);
        ans %= MOD;
    }
    
    return tb[x] = ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tb[0] = 1;

    ll n, x; cin >> n >> x;

    while(n--){
        ll c; cin >> c;
        coins.pb(c);
    }

    cout << dp(x) << endl;

    return 0;
}