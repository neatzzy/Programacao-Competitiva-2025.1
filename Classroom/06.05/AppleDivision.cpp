#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vll vector<long long>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

ll divisao(int i, vll &a, ll soma1, ll soma2, int n) {
    if (i == n) {
        return abs(soma1 - soma2);
    }
    ll div1 = divisao(i + 1, a, soma1 + a[i], soma2, n);
    
    ll div2 = divisao(i + 1, a, soma1, soma2 + a[i], n);
    
    return min(div1, div2);
}

int main(){
    
    int n; cin >> n;
    vll a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << divisao(0, a, 0, 0, n) << endl;
    
    return 0;
}