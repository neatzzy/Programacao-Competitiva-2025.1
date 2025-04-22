// https://codeforces.com/group/btcK4I5D5f/contest/537349/problem/K

#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back

int main(){
    
    int n; cin >> n;
    vi lidos;
    ll ultrapassagens = 0;

    for(int i = 0; i < n; i++){
        int aux; cin >> aux;
        lidos.pb(aux);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(lidos[i] > lidos[j]){
                ultrapassagens++;
            }
        }
    }

    cout << ultrapassagens << "\n";
    
    return 0;
}