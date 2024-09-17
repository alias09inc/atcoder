#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n;
    string s;
    string cr = "ABC";
    cin >> n >> s;
    int cnt = 0;
    for(int i=0; i<n; i++) {
        // cout << s[i] << cr[cnt] << endl;
        if(s[i] == cr[cnt]) {
            cnt++;
        } else {
            cnt = 0;
            if(s[i] == cr[cnt]) {
                cnt++;
            }
        }
        if(cnt == 3) {
            cout << i-1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}