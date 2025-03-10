#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool tf = false;
    for(int i=0; i<n; i++) {
        if(s[i] == 'x') {
            tf = false;
            break;
        }
        if(s[i] == 'o') {
            tf = true;
        }
    }

    if(tf) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}