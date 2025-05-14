// https://codeforces.com/group/btcK4I5D5f/contest/537349/problem/C

#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main(){
    
    int n; cin >> n;
    bool simetrico = true;
    vector<string> mapa;

    for(int i = 0 ; i < n ; i++){
        string input; cin >> input;
        mapa.pb(input);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (mapa[i][j] != mapa[j][i]) {
                simetrico = false;
                break;
            }
        }
        if (!simetrico) break;
    }

    simetrico ? cout << "Sim" : cout << "Nao";
    cout << "\n";
    
    return 0;
}