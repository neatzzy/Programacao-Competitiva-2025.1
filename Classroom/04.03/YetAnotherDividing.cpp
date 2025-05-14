// https://codeforces.com/problemset/problem/1249/A

#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

int main(){
    
    int cases;

    cin >> cases;

    for(int i = 0 ; i < cases ; i++){
        int qty;
        bool flag = false;
        vi students;

        cin >> qty;

        for(int j = 0 ; j < qty ; j++){
            int aux;
            cin >> aux;

            students.pb(aux);
        }

        for(int j = 0 ; j < qty and !flag ; j++){
            for(int k = j ; k < qty ; k++){
                if(abs(students[j] - students[k]) == 1){
                    flag = true;
                    break;
                }
            }
        }
        flag ? cout << "2" << "\n" : cout << "1" << "\n";
    }
    
    return 0;
}