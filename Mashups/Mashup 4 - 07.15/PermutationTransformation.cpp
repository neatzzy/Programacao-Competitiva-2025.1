#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void fillDepth(int l, int r, int d, vector<int>& depth, const vector<int>& a) {
    if (l > r) return;
    if (l == r) {
        depth[l] = d;
        return;
    }

    int maxIndex = max_element(a.begin() + l, a.begin() + r + 1) - a.begin();
    depth[maxIndex] = d;

    fillDepth(l, maxIndex - 1, d + 1, depth, a);
    fillDepth(maxIndex + 1, r, d + 1, depth, a);
}

void solve(){
    int n; cin >> n;
    vi a(n);
    vi depth(n, -1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    fillDepth(0, n - 1, 0, depth, a);

    for(int i = 0; i < n; i++){
        cout << depth[i] << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}