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

    int n; cin >> n;
    int contagem = 0;

    while(n >> 1){
        if(n & 1){
            contagem++;
        }
        n >>= 1;
    }
    cout << contagem + 1 << endl;
    
    return 0;
}