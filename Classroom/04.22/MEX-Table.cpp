// https://codeforces.com/problemset/problem/2057/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int casos; cin >> casos;

    for(int i = 0 ; i < casos ; i++){
        int n, m; cin >> n >> m;

        cout << max(n,m) + 1 << endl;
    }
    
    return 0;
}