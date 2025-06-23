#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

void solution(){
    int n; cin >> n;
    string s; cin >> s;

    stack<char> st;

    for(int i = 0; i < n; i++){
        if(s[i] == ')' && !st.empty() && st.top() == '('){
            st.pop();
        } else {
            st.push(s[i]);
        }
    }

    cout << st.size() / 2 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int casos; cin >> casos;
    
    while(casos--){
        solution();
    }
    
    return 0;
}