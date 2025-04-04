// https://codeforces.com/problemset/problem/1238/A

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    
    int cases;

    cin >> cases;

    for(int i = 0 ; i < cases ; i++){
        ll a, b;

        cin >> a >> b;

        a - b >= 2 ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
    
    return 0;
}