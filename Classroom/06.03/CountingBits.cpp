#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll msb(ll n){
    ll m = 0;
    while (n > 1) {
        n = n >> 1;
        m++;
    }
    return m;
}

ll msbNext(ll n, ll m){
    ll temp = 1 << m;
    while (n < temp) {
        temp = temp >> 1;
        m--;
    }
    return m;
}

ll contaBits(ll n){
    if (n == 0)
        return 0;

    ll m = msb(n);

    m = msbNext(n, m);

    if (n == (1LL << (m + 1)) - 1) return (m + 1) * (1 << m);

    n = n - (1LL << m);
    return (n + 1) + contaBits(n) + m * (1LL << (m - 1));
}

int main(){
    
    ll n; cin >> n;

    cout << contaBits(n) << endl;

    return 0;
}