#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n; cin >> n;
    priority_queue<int, vi, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        pq.push(x);
    }

    ll valor = 0;
    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        valor += max(a, b);
        pq.push(a + b);
    }

    cout << valor << endl;
    return 0;
}
