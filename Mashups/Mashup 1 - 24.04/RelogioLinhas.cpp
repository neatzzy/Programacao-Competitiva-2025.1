#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int testes; cin >> testes;

    for(int i = 0 ; i < testes ; i++){
        int a, b, c, d; cin >> a >> b >> c >> d;

        if (a > b) swap(a, b);
        if (c > d) swap(c, d);

        bool cruza = (a < c and c < b and b < d) or (c < a and a < d and d < b);

        cruza ? cout << "YES" : cout << "NO";
        cout << "\n";
    }
    
    return 0;
}