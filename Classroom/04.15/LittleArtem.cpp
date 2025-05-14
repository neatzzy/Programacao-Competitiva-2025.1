// https://codeforces.com/problemset/problem/1333/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int cases; cin >> cases;

    for(int i = 0 ; i < cases ; i++){
        int n, m; cin >> n >> m;

        for(int j = 1 ; j <= n ; j++){
            for(int k = 1 ; k <= m ; k++){
                if(j == 1 and k == 1) cout << 'W';
                else cout << 'B';
            }
            cout << "\n";
        }

    }
    
    return 0;
}