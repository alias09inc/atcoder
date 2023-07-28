#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int b1=-1, b2=-1, r1=-1, r2=-1, k=-1;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='B') {
            if(b1==-1) {
                b1 = i;
            } else {
                b2 = i;
            }
        }
        if(s[i]=='R') {
            if(r1==-1) {
                r1 = i;
            } else {
                r2 = i;
            }
        }
        if(s[i]=='K') {
            k = i;
        }
    }
    if(b1%2==1 and b2%2==1) {
        cout << "No" << endl;
    } else if(b1%2==0 and b2%2==0) {
        cout << "No" << endl;
    } else if(k < r1 or k > r2) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}