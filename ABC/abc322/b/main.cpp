#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int s_len, t_len;
    string s, t;
    cin >> s_len >> t_len >> s >> t;
    bool pre = true, suf = true;
    for(int i=0; i<s_len; i++) {
        if(s[i] != t[i]) {
            pre = false;
            break;
        }
    }
    for(int i=0; i<s_len; i++) {
        if(s[s_len-i-1] != t[t_len-i-1]) {
            suf = false;
            break;
        }
    }
    int ans = 0;
    if(!pre) ans+=2;
    if(!suf) ans+=1;
    cout  << ans << endl;
    return 0;
}