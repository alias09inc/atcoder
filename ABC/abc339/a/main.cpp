#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    string s;
    cin >> s;
    auto end = s.length() - 1;
    auto start = end;
    while(s.at(start) != '.') start--;
    for (int i = start+1; i < s.length(); i++)
    {
        cout << s.at(i); 
    }
    cout << endl;
    
    return 0;
}
