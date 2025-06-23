#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> indegree(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        indegree[b]++;
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) pq.push(i);
    }

    vector<int> order;
    while (!pq.empty()) {
        int u = pq.top(); pq.pop();
        order.push_back(u);
        for (int v : adj[u]) {
            indegree[v]--;
            if (indegree[v] == 0) pq.push(v);
        }
    }

    if ((int)order.size() != n) {
        cout << -1 << endl;
    } else {
        for (int x : order) cout << x << " ";
        cout << endl;
    }

    return 0;
}