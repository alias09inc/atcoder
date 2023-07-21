#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    bool tf = true;

    int s_cnt=1, t_cnt=1, s_i=0, t_i=0;
    // int loop=0;

    while(s_i < s.size() && t_i < t.size()) {
        // cout << s_i << " ";
        // cout << t_i << " ";
        // cout << loop++ << "\n";
        if(s[s_i] == t[t_i]) {
            // cout << "flag" << endl;
            while(s[s_i] == s[s_i+1]) {
                s_cnt++;
                s_i++;
            }
            while(t[t_i] == t[t_i+1]) {
                t_cnt++;
                t_i++;
            }
            if(s_cnt == 1 && t_cnt != 1) {
                tf = false;
                break;
            }
            if(t_cnt == 1 && s_cnt != 1) {
                tf = false;
                break;
            }
            s_i++; t_i++;
        } else {
            tf = false;
            break;
        }
        s_cnt = 1; t_cnt = 1;
    }

    if(tf) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}