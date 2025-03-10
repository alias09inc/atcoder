#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

array dx = {0, 1, 0, -1};
array dy = {1, 0, -1, 0};

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> dim(h, vector<char>(w, '.'));
    auto direction = 0;
    pair<int, int> state = {0,0};
    rep(i, n){
        dim.at(state.first).at(state.second) =  '#';
        direction++;
        direction = direction % 4;
        state.first += dx[direction];
        state.second += dy[direction];
        state.first %= h;
        state.second %= w;
    }
    rep(i,h) {
        rep(j,w) {
            cout << dim.at(i).at(j);
        }
        cout << endl;
    }
    return 0;
}