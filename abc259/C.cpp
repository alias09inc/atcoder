#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
2文字以上あれば何文字でも伸ばせる
問題は片方が1文字しかないとき
短い文を基準として比較していくと楽かも?
cinでは改行が文字列バッファに入らない
お互いに同じ文字のとき、次の文字が変わるまでプラスしていき、その長さの一方が1もう一方が2以上になったときにNOそれいがいのときはOK
*/
int main() {
    string s, t;
    cin >> s >> t;
    //cout << s << t << endl;
    int s_cnt = 0, t_cnt=0, flag = 0, loop = 0;
    auto s_itr = s.begin();
    auto t_itr = t.begin();
    while(s_itr != s.end() and t_itr != t.end()) {
        loop++;
        if(*s_itr == *t_itr) {
            loop--;
            s_cnt = 0;
            t_cnt = 0;
            while(*s_itr == *(++s_itr)) {//文字が変わる前までその文字の数をカウントする
                s_cnt++;
            }
            while(*t_itr == *(++t_itr)) {//文字が変わる前までその文字の数をカウントする
                t_cnt++;
            }
            if(s_cnt == 0 and t_cnt != 0) {
                flag = 1;
            }
            if(t_cnt == 0 and s_cnt != 0) {
                flag = 1;
            }
            if(*s_itr != *t_itr) {
                flag = 1;
            }
        }
        if(loop >= 1) {
            flag = 1;
            break;
        } else if( flag >= 1) {
            break;
        }
    }
    if(flag == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}