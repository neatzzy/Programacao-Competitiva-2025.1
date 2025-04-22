#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isPrime(ll n){
    if(n == 0 or n == 1){
        return false;
    }

    for(ll i = 2 ; i < n/2 ; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    
    int cases; cin >> cases;

    for(int i = 0 ; i < cases ; i++){
        string x, final;
        int k;

        cin >> x;
        cin >> k;

        for(int j = 0 ; j < k ; j++){
            final += x;
        }

        if(final.size() > 18){
            cout << "NO" << endl;
            continue;
        }
        isPrime(stoull(final)) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}