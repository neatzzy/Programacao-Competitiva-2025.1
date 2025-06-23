#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ll long long
#define ii pair<int,ll>
#define INF LLONG_MAX

stack<int> caminho;

void dijkstra(const vector<vector<ii>>& adj, int start, int end){
    int n = adj.size();
    vector<ll> dist(n, INF);
    vector<int> anterior(n, -1);
    priority_queue<ii, vector<ii>, greater<ii> > pq;

    dist[start] = 0;
    pq.push(mp(0, start));

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        for(auto aux : adj[u]){
            int v = aux.first;
            int w = aux.second;

            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                anterior[v] = u;
                pq.push(mp(dist[v], v));
            }
        }
    }

    if(dist[end] == INF) return;

    for(int v = end; v != -1; v = anterior[v]){
        caminho.push(v);
    }
    
    return;
}

int main(){
    
    int n, m; cin >> n >> m;
    vector<vector<ii>> adj(n);

    for(int i = 0; i < m; i++){
        ll w;
        int a, b; cin >> a >> b >> w;
        --a; --b;
        adj[a].pb(mp(b, w));
        adj[b].pb(mp(a, w));

    }

    dijkstra(adj, 0, n - 1);

    if(caminho.empty()) cout << -1;
    else{
        while(!caminho.empty()){
            cout << caminho.top() + 1 << " ";
            caminho.pop();
        }
    }
    cout << endl;
    
    return 0;
}