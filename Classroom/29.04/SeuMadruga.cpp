#include <bits/stdc++.h>

using namespace std;

#define pb push_back

double somar(vector<double>v, double mid){
    double soma = 0;
    for(int i = v.size() - 1 ; i > 0 ; i--){
        if(mid >= v[i]) return soma;

        soma += v[i] - mid;
    }
    return soma;
}

double busca(vector<double>v, double a, double soma){
    double low = 0, high = v[v.size()-1], mid;

    while(low <= high){
        mid = (low + high) / 2.0;
        double soma2 = somar(v, mid);

        if(fabs(soma2 - a) < 1e-4) return mid;
        if(soma2 < a) high = mid;
        else low = mid;
    }
    return mid;
}

int main(){
    int n;
    double a;
    
    while((cin >> n >> a) and n != 0 and a != 0){
        vector<double>v;

        double soma = 0;

        for(int i = 0 ; i < n ; i++){
            double x;
            cin >> x;
            v.pb(x);
            soma += x;
        }

        if(soma < a) cout << "-.-";
        else if (soma == a) cout << ":D";
        else{
            sort(v.begin(), v.end());
            cout << fixed << setprecision(4) << busca(v, a, soma);
        }

        cout << "\n";

    }

    
    return 0;
}