// https://codeforces.com/problemset/problem/2031/C

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int casos; cin >> casos;

    for(int i = 0; i < casos; i++) {
        int n; cin >> n;

        if(n % 2 == 0) {
            int j = 1;
            while((j - 1) * 2 != n) {
                cout << j << " " << j << " ";
                j++;
            }
        } else if(n < 27) {
            cout << "-1";
        } else {
            cout << "1 2 2 3 3 4 4 5 5 1 ";
            cout << "6 6 7 7 8 8 9 9 10 10 11 11 13 12 12 1 13 ";
            int j = 14;
            while(j * 2 < n) {
                cout << j << " " << j << " ";
                j++;
            }
        }
        cout << "\n";
    }
    
    return 0;
}