#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define INF INT_MAX

void bfs(int start, vector<vi> &adj, vector<int> &dist){
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(dist[v] == INF){ 
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main(){
    
    int n, m; cin >> n >> m;
    vector<vi> adj(n + 1);
    vi dist(n + 1, INF);
    dist[0] = 0;

    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    bfs(1, adj, dist);

    dist[n] != INF ? cout << dist[n] << endl : cout << -1 << endl;
    
    return 0;
}