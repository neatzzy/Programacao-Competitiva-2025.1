#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> pilha;

    pilha.push(s[0]);

    for(int i = 1 ; i < s.size() ; i++){
        if(!pilha.empty() && s[i] == pilha.top()){
            pilha.pop();
        } else {
            pilha.push(s[i]);
        }
    }

    pilha.empty() ? cout << "sim" : cout << "nao";
    cout << endl;

    return 0;
}