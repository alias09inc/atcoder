#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    string s;
    cin >> s;
    int idx=0;
    if(s[idx] != 'A') {cout << "No" << endl; return 0;}
    while(s[idx] == 'A') {
        idx++;
    }
    // cout << s[idx] << endl;
    if(s[idx] != 'B' && idx != s.length()) {cout << "No" << endl; return 0;}
    while(s[idx] == 'B') {
        idx++;
    }
    // cout << s[idx] << endl;

    if(s[idx] != 'C' && idx != s.length()) {cout << "No" << endl; return 0;}
    while(s[idx] == 'C') {
        idx++;
    }
    // cout << s[idx-1] << endl;
    if(idx == s.length()) {cout << "Yes" << endl;}
    else {cout << "No" << endl;}
    return 0;
}