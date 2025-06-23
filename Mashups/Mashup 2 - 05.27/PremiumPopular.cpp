#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    
    int p, n; cin >> p >> n;
    stack<int> st;

    for(int i = 0 ; i < n ; i++){
        int aux; cin >> aux;

        switch(aux){
            case 1:
                int x; cin >> x;
                st.push(x);
                break;
            case 2:
                int y; cin >> y;
                for(int j = 0; j < y ; j++){
                    st.pop();
                }
                break;
        }
    }

    while(!st.empty()){
        p += st.top();
        st.pop();
    }

    cout << p << endl;
    
    return 0;
}