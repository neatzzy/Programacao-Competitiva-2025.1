#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

int main(){
    
    int n; cin >> n;
    vi v, troca;
    int ultimo, maior = 0;

    cin >> ultimo;
    v.pb(ultimo);

    for(int i = 1; i < n; i++){
        int x; cin >> x;
        if(x != ultimo) troca.pb(i);
        v.pb(x);
        ultimo = x;
    }

    while(!troca.empty()){
        int p1 = troca.back();
        int p2 = p1 - 1;
        int sequencia = 2;
        troca.pop_back();

        while(v[p1+1] == v[p1] and v[p2-1] == v[p2] and p1 < n-1 and p2 > 0){
            p1++;
            p2--;
            sequencia += 2;
        }

        maior = max(maior, sequencia);
    }

    cout << maior << endl;
    
    return 0;
}

