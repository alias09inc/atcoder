#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    bool tf = true;
    for(int i=0; i<n; i++) {
        if(a[i] == b[i]) {
            continue;
        } else if (a[i] == 'l' && b[i] == '1') {
            continue;
        } else if (a[i] == '1' && b[i] == 'l') {
            continue;
        } else if (a[i] == '0' && b[i] == 'o') {
            continue;
        } else if (a[i] == 'o' && b[i] == '0') {
            continue;
        } else {
            tf = false;
        }
    }
    if(tf) {cout << "Yes" << endl;}
    else {cout << "No" << endl;}
}