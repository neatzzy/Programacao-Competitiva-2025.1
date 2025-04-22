#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int casos; cin >> casos;

    for(int i = 0; i < casos; i++) {
        int n; cin >> n;
        ll soma = 0;
        for(int j = 0; j < n; j++) {
            int aux;cin >> aux;
            soma += aux;
        }

        soma % 2 ? cout << "NO" << endl : cout << "YES" << endl;

    }
    
    return 0;
}