#include <bits/stdc++.h>
using namespace std;

int main() {
    //文字カウント用の配列と文字列用の変数の作成及び初期化
    vector<int> cnt_s(256,0), cnt_t(256, 0);
    string s, t;
    cin >> s >> t;
    string rep = "atcoder";

    //文字列からそれぞれの文字の出現回数をカウント
    for(int i=0; i<s.length(); i++) {
        cnt_s[s[i]]++;
        cnt_t[t[i]]++;
    }

    for(int i=0; i<rep.length(); i++) {
        int M = max(cnt_s[rep[i]], cnt_t[rep[i]]);
        cnt_s['@'] -= M - cnt_s[rep[i]];
        cnt_s[rep[i]] = M;
        cnt_t['@'] -= M - cnt_t[rep[i]];
        cnt_t[rep[i]] = M;
    }

    int ans=cnt_s['@']>=0;
    for(int i=0; i<256; i++)ans&=cnt_s[i]==cnt_t[i];
    if(ans == 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}