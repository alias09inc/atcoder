#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n, m, maxlen=0;
    cin >> n >> m;
    // 最初の値が自分の前の人、二個目の要素が自身から始まる列の長さ
    vector<pair<int, int>> janken(n+2, pair(0,0));
    rep(i,n+1) {
        janken.at(i+1).first = i+1;
        janken.at(i+1).second = 1;
    }
    int winner, loser;
    rep(i,m) {
        cin >> winner >> loser;
        janken.at(loser).first = winner;
        janken.at(winner).second = janken.at(loser).second + 1;
        maxlen = max(maxlen, janken.at(winner).second);
    }
    rep(i,n) {
        if(janken.at(i+1).second >= maxlen) {
            cout << i+1 << endl;
        }
    }
    return 0;
}