#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

bool escape(vi posKing, vi posQueen, vi posTarget){
    int kingX, kingY, targetX, targetY;
    if(posKing[0] > posQueen[0]){
        kingX = 1;
    }
    else{
        kingX = -1;
    }
    if(posKing[1] > posQueen[1]){
        kingY = 1;
    }
    else{
        kingY = -1;
    }
    if(posTarget[0] > posQueen[0]){
        targetX = 1;
    }
    else{
        targetX = -1;
    }
    if(posTarget[1] > posQueen[1]){
        targetY = 1;
    }
    else{
        targetY = -1;
    }

    return kingX == targetX and kingY == targetY ? true : false;
}

int main(){
    int size;
    vi posKing(2), posQueen(2), posTarget(2);

    cin >> size;
    cin >> posQueen[0] >> posQueen[1];
    cin >> posKing[0] >> posKing[1];
    cin >> posTarget[0] >> posTarget[1];

    posKing[0]--; posKing[1]--;
    posQueen[0]--; posQueen[1]--;
    posTarget[0]--; posTarget[1]--;
    
    escape(posKing, posQueen, posTarget) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}