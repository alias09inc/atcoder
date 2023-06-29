#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> str(n);
    for(int i=0; i<n; i++) {
        cin >> str[i];
    }

    sort(str.begin(), str.end());

    do {
        bool tf = true;
        for(int i=0; i<n-1; i++) {
            int cnt=0;
            for(int j=0; j<m; j++) if(str[i][j] != str[i+1][j]) cnt++;
            if(cnt != 1) tf = false;
        }
        if(tf) {
            cout << "Yes" << endl;
            return 0;
        }
    } while(next_permutation(str.begin(), str.end()));
    cout << "No" << endl;
    return 0;
}