#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans=0;
    set<string> st;
    for(int i=0; i<n; i++) {
        string tmp;
        cin >> tmp;
        if(st.count(tmp) != 0) {
            ans++;
        } else {
            reverse(tmp.begin(), tmp.end());
            if(st.count(tmp) != 0) {
                ans++;
            } else {
                st.insert(tmp);
            }
        }
    }
    cout << n - ans << endl;
}