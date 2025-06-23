#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solve() {
    int n; cin >> n;
    set <int> s;
    for(int i = 0 ; i < n ; i++) {
        int x; cin >> x;
        if(!(x & 1)) s.insert(x);
    }

    int ans = 0;
    while (!s.empty()) {
        int c = *s.rbegin();
        s.erase(c);
        ans++;
        c >>= 1;
        if (!(c & 1)) s.insert(c);
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;

    while(n--) solve();

    return 0;
    
}