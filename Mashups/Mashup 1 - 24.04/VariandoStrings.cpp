#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int casos; cin >> casos;
    
    for(int i = 0 ; i < casos ; i++){
        string s; cin >> s;
        sort(s.begin(), s.end());

        int n = s.size();

        if(n == 1){
            cout << "YES" << "\n";
            continue;
        }

        bool flag = true;
        for(int j = 0 ; j < n - 1; j++){
            if(s[j+1] - s[j] != 1){
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
    
    return 0;
}