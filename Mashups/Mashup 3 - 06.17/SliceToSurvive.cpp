#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    vector<ii> rec({
    mp(a, m), mp(n - a + 1, m),
    mp(n, b), mp(n, m - b + 1)});

    int ans = n + m;
    for (auto [n1, m1] : rec) {
        int res = 0;
        while (n1 > 1) {
            res++;
            n1 = (n1 + 1) / 2;
        }
        while (m1 > 1) {
            res++;
            m1 = (m1 + 1) / 2;
        }
        ans = min(ans, res);
    }

    cout << 1 + ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}