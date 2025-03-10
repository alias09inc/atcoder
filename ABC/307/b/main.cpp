#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    string tmp;
    for(auto& elem: s) cin >> elem;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i!=j) {
                tmp = s[i]+s[j];
                bool tf = true;
                for(int k=0; k<tmp.size()/2;k++) {
                    if(tmp[k] != tmp[tmp.size()-k-1]) {
                        tf = false;
                        break;
                    }
                }
                if(tf) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}