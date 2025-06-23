#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int n, a; cin >> n;
    stack<int> st;
    multiset<int> s;

    for(int i = 0 ; i < n ; i++){
        char c; cin >> c;
        switch(c){
            case 'A':{
                cin >> a;
                st.push(a);
                s.insert(a);
                break;
            }
            case 'R':{
                cin >> a;
                int aux = st.top();
                st.pop();
                s.erase(s.find(aux));
                break;
            }
            case 'V':{
                cin >> a;
                if(st.empty()) cout << 0 << endl;
                else {
                    cout << *prev(s.end()) << endl;
                }
                break;
            }
        }
    }
    return 0;
}