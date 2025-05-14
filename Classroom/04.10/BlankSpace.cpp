#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int casos;

    cin >> casos;

    for(int i = 0 ; i < casos ; i++){
        int tam, atual = 0, maior = 0;
        cin >> tam;

        for(int j = 0 ; j < tam ; j++){
            int aux; cin >> aux;
            if(aux == 0){
                atual++;
            }
            else {
                maior = max(maior, atual);
                atual = 0;
            }
        }
        maior = max(maior, atual);
        cout << maior << endl;
    }
    
    return 0;
}