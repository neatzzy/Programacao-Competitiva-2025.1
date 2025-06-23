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
    vector<ii> atividades(n);
    for(int i = 0; i < n; i++){
        int inicio, fim;
        cin >> inicio >> fim;
        atividades[i] = mp(fim, inicio);
    }
    sort(atividades.begin(), atividades.end());
    int cont = 0, fimUltimaAtividade = -1;
    for(int i = 0; i < n; i++){
        if(atividades[i].second >= fimUltimaAtividade){
            cont++;
            fimUltimaAtividade = atividades[i].first;
        }
    }
    cout << cont << endl;
    
    return 0;
}