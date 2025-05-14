// https://codeforces.com/problemset/problem/992/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int size, zeros = 0;
    cin >> size;
    set<int> arr;

    for(int i = 0 ; i < size ; i++){
        int aux; cin >> aux;
        if(aux == 0) zeros++;
        arr.insert(aux);
    }

    zeros ? cout << arr.size() - 1 << "\n" : cout << arr.size() << "\n";

    return 0;
}
