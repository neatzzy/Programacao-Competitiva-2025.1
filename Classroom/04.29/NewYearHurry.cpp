#include <bits/stdc++.h>
 
using namespace std;
 
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int somatorio(int n){
    return 5 * ((n * (n + 1)) / 2);
}

int main(){
    
    int n, k; cin >> n >> k;
    int res, total;

    res = 240 - k;

    if(res < 5){
        cout << 0 << endl;
        return 0;
    }

    int low = 1, high = n;

    while(low <= high){
        int mid = (low + high) / 2;
        int sum = somatorio(mid);
        if(sum <= res){
            total = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    cout << total << endl;
    
}