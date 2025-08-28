// https://codeforces.com/problemset/problem/992/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int size;
    cin >> size;
    set<int> arr;

    for(int i = 0 ; i < size ; i++){
        int aux; cin >> aux;
        arr.insert(aux);
    }

    arr.find(0) != arr.end() ? cout << arr.size() - 1 << "\n" : cout << arr.size() << "\n";

    return 0;
}
