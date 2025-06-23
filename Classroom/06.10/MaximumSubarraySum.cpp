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
    ll maxSum, currSum;

    cin >> maxSum; currSum = maxSum;
    for(int i = 1; i < n; i++) {
        ll x; cin >> x;
        currSum = max(x, currSum + x);
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum << endl;
    
    return 0;
}