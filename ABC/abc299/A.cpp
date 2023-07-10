#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for(int i=0; i<n; i++) {
        if(s[i] == '|') flag = !flag;
        if(flag && s[i] == '*') {
            cout << "in" << endl;
            return 0;
        }
    }
    cout << "out" << endl;
    return 0;
}