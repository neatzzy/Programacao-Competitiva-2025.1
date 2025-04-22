#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int directors, minutes;
    cin >> directors >> minutes;

    if(directors == 1) cout << minutes << endl;
    else{
        minutes -= (directors - 1);
        cout << minutes/directors << endl;
    }
    return 0;
}