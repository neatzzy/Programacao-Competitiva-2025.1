#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int testes; cin >> testes;

    for(int i = 0 ; i < testes ; i++){
        int n; cin >> n;
        int menor1 = INT_MAX, menor2 = INT_MAX, unico = INT_MAX;

        for(int j = 0 ; j < n ; j++){
            int minutos;
            string habilidades;
            cin >> minutos >> habilidades;

            if(habilidades[0] == '1' and habilidades[1] == '1'){
                if(minutos < unico){
                    unico = minutos;
                }
            }

            if(habilidades[0] == '1'){
                if(minutos < menor1 or menor1 == -1){
                    menor1 = minutos;
                }
            }
            if(habilidades[1] == '1'){
                if(minutos < menor2 or menor2 == -1){
                    menor2 = minutos;
                }
            }
        }

        if(menor1 == INT_MAX or menor2 == INT_MAX){
            cout << "-1" << "\n";
            continue;
        }

        int resultado = min(unico, menor1 + menor2);
        cout << resultado << "\n";
    }
    
    return 0;
}
