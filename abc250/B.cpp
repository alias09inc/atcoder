#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0; i< (int)(n); i++)

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<string> tails(0);
    string white_tail, black_tail;
    rep(i, b) white_tail.push_back('.');
    rep(i, b) black_tail.push_back('#');
    string s_white, s_black;
    rep(i, n) {
        if(i%2==0) {
            s_white += white_tail;
            s_black += black_tail;
        } else {
            s_white += black_tail;
            s_black += white_tail;
        }
    }
    rep(i, n) {
        if(i%2==0) {rep(j,a) tails.push_back(s_white);}
        if(i%2==1) {rep(j,a) tails.push_back(s_black);}
    }

    rep(i,tails.size()) cout << tails.at(i) << endl;
    return 0;
}