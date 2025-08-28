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

    int n; cin >> n;
    ll ans = 0;
    
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}