#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s.length() <= 3) {
        cout << s << endl;
    } else {
        for(int i=0; i<s.length(); i++) {
            if(i<3) {
                cout << s[i];
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}