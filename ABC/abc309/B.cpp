#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<string> s(n);

    for(int i=0; i<n; i++) {
        cin >> s[i];
    }

    vector<char> stock(4);
    stock[0] = s[0][0];//左上
    stock[1] = s[n-1][0];//左下
    stock[2] = s[n-1][n-1];//右下
    stock[3] = s[0][n-1];//右上
    // for(int i=0; i<4; i++) {
    //     cout << stock[i];
    // }
    // cout << endl;
    //1行目
    for(int i=n-1; i>=2; i--) {
        s[0][i] = s[0][i-1];
    }
    s[0][1] = stock[0];
    //n列目
    for(int i=n-1; i>=2; i--) {
        s[i][n-1] = s[i-1][n-1];
    }
    s[1][n-1] = stock[3];
    //n行目
    for(int i=0; i<n-2; i++) {
        s[n-1][i] = s[n-1][i+1];
    }
    s[n-1][n-2] = stock[2];
    //1列目
    for(int i=0; i<n-2; i++) {
        s[i][0] = s[i+1][0];
    }
    s[n-2][0] = stock[1];
    // cout << "\n";
    for(int i=0; i<n; i++) {
        cout << s[i] << "\n";
    }
    // cout << "\n";

    // cout << s[3][3] << endl;
    return 0;
}