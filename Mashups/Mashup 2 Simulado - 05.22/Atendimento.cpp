#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pq priority_queue
#define pb push_back
#define mp make_pair
#define ll long long

typedef pair<long long, int> pli;

int main() {
    int n, m;
    cin >> n >> m;
    vi v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    vi c(m);
    for (int i = 0; i < m; ++i) cin >> c[i];

    pq<int, vi, greater<int>> livres;
    for (int i = 0; i < n; ++i) livres.push(i);

    pq<pli, vector<pli>, greater<pli>> ocupados;

    long long tempoFinal = 0;
    int idxCliente = 0;
    long long tempoAtual = 0;

    while (idxCliente < m) {
        while (!ocupados.empty() && ocupados.top().first <= tempoAtual) {
            livres.push(ocupados.top().second);
            ocupados.pop();
        }

        if (!livres.empty()) {
            int caixa = livres.top(); livres.pop();
            ll tempoAtendimento = (ll)v[caixa] * c[idxCliente];
            ll fim = tempoAtual + tempoAtendimento;
            ocupados.push({fim, caixa});
            tempoFinal = max(tempoFinal, fim);
            idxCliente++;
        } else tempoAtual = ocupados.top().first;
    }

    cout << tempoFinal << endl;
    return 0;
}