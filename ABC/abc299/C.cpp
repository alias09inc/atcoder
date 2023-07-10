#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int maxl = -1;
    int current_length = 0;
    for(int flip=0; flip<2; flip++) {
        for(int i=0; i<n; i++) {
            if(s[i] == '-') {
                maxl = max(maxl, current_length);
                current_length = 0;
            } else current_length++;
        }
        reverse(begin(s), end(s));
    }
    if(maxl) cout << maxl << endl;
    else cout << -1 << endl;
    return 0;
}