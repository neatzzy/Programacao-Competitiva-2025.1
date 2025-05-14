#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int casos; cin >> casos;

    for(int i = 0 ; i < casos ; i++){
        int n, k; cin >> n >> k;
        vector<int> v;
        map<int, int> m;

        for(int j = 0 ; j < n ; j++){
            int x; cin >> x;
            v.push_back(x);
        }

        for(int j = 0; j < n; j++){
            int complemento = k - v[j];
            if(m.find(complemento) != m.end()){
                cout << m[complemento] << " " << j << endl;
                break;
            }
            m[v[j]] = j;
        }
    }
    
    return 0;
}