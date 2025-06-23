#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main() {
    int n;
    cin >> n;
    vi votos(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> votos[i];
    }

    int comprados = 0;
    priority_queue<int> pq;
    for (int i = 2; i <= n; i++) {
        pq.push(votos[i]);
    }

    while (!pq.empty() && pq.top() >= votos[1]) {
        int maior = pq.top();
        pq.pop();
        maior--;
        votos[1]++;
        comprados++;
        pq.push(maior);
    }

    cout << comprados << endl;
    return 0;
}
