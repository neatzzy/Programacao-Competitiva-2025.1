#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main(){
    
    ll n, m; cin >> n >> m;

    map<string, bool> visited;
    vector<string> aux;

    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        visited[s] = false;
        aux.pb(s);
    }

    for(ll i = 0; i < m; i++){
        string s; cin >> s;
        visited[s] = true;
    }

    for(const auto& i : aux){
        visited[i] ? cout << "Yes" : cout << "No";
        cout << endl;
    }
    
    return 0;
}