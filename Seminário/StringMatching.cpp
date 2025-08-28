#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long

void constructLps(string &pat, vi &lps) {
    int len = 0;
    lps[0] = 0;
    int i = 1;
    
    while (i < pat.length()) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

ll search(string &pat, string &txt) {
    ll ans = 0;
    int n = txt.length();
    int m = pat.length();

    vector<int> lps(m);

    constructLps(pat, lps);

    int i = 0;
    int j = 0;

    while (i < n) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
            if (j == m) {
                ans++;
                j = lps[j - 1];
            }
        }
        else {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string txt; cin >> txt;
    string pat; cin >> pat;

    ll res = search(pat, txt);
    
    cout << res << endl;

    return 0;
}