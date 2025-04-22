#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int casos; cin >> casos;

    for (int i = 0; i < casos; i++) {
        int n; cin >> n;
        int tam = 2 * n;

        for (int j = 0; j < tam; j++) {
            for (int k = 0; k < tam; k++) {
                if (((j / 2) + (k / 2)) % 2 == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << '\n';
        }
    }
    
    return 0;
}