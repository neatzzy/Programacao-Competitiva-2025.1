#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, c; cin >> r >> c;
    vector<string> grid(r);
    for(int i = 0; i < r; i++) {
        cin >> grid[i];
    }

    vector<bool> rS(r, false), cS(c, false);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(grid[i][j] == 'S') {
                rS[i] = true;
                cS[j] = true;
            }
        }
    }

    int ans = 0;

    for(int i = 0; i < r; i++) {
        if(!rS[i]) {
            ans += c;
        }
    }

    for(int j = 0; j < c; j++) {
        if(!cS[j]) {
            for(int i = 0; i < r; i++) {
                if(rS[i] && grid[i][j] == '.') {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}