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

    int s, n; cin >> s >> n;
    vector<ii> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        if(s > v[i].first){
            s += v[i].second;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}