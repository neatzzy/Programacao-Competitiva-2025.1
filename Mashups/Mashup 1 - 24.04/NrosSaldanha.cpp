#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    vi nros(4);

    for (int i = 0; i < 4; i++) {
        cin >> nros[i];
    }

    sort(nros.begin(), nros.end());

    int a = nros[3] - nros[2];
    int b = nros[3] - nros[1]; 
    int c = nros[3] - nros[0]; 

    cout << a << " " << b << " " << c << endl;

    return 0;
}
