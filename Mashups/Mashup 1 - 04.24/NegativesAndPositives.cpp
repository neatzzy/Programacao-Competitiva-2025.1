#include <bits/stdc++.h>
using namespace std;

#define vi vector<long long>
#define ll long long

int main() {

    ll casos; cin >> casos;

    for(ll i = 0; i < casos; i++) {
        ll n;
        cin >> n;
        vi a(n);

        ll inicial = 0;
        for (ll j = 0; j < n; j++) {
            cin >> a[j];
            inicial += a[j];
        }

        ll maior = inicial;

        for (ll j = 0; j < n - 1; j++) {
            ll trocado = inicial - 2 * a[j] - 2 * a[j + 1];
            maior = max(maior, trocado);
        }

        cout << maior << "\n";
    }

    return 0;
}
