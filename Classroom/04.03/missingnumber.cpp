// https://vjudge.net/problem/CSES-1083 

#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    
    ll qtd, soma;

    cin >> qtd;

    soma = (qtd * (qtd+1))/2;

    for(ll i = 0 ; i < qtd - 1 ; i++){
        ll aux;
        cin >> aux;
        soma -= aux;
    }

    cout << soma << "\n";
    
    return 0;
}