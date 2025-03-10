#include <bits/stdc++.h>
using namespace std;

//文字の近傍探索用の配列. 先頭から時計回りに左、左上、上、右上....となっている
int dx[] = {-1,-1,0,1,1,1,0,-1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
vector<pair<int, int>> route;

//正解の文字列
string ans = "snuck";

//mass:配列, px, py:前の配列, direction:方向, current現在の文字
bool dfs(vector<vector<char>> mass, int px, int py, int direction, int current) {
    bool tf;
    if(current >= 5) return true;
    if((px+dx[direction] < 0) || (px+dx[direction] > mass[0].size())) return false;
    if((py+dy[direction] < 0) || (py+dy[direction] > mass.size())) return false;
    if(mass[py+dy[direction]][px+dx[direction]] == ans[current]) {
        pair<int, int> location;
        location.first = px+dx[direction];
        location.second = py+dy[direction];
        route.push_back(location);
        tf = dfs(mass, px+dx[direction], py+dy[direction], direction, current+1);
    }
    return tf;
}


int main() {
    int m, w;
    cin >> m >> w;
    string a;
    vector<string> rcv;
    for(int i=0; i<m; i++) {
        cin >> a;
        rcv.push_back(a);
    }
    
    vector<vector<char>> mass(m, vector<char>(w));

    for(int i=0; i<m; i++) {
        for(int j=0; j<w; j++) {
            mass[i][j] = rcv[i][j];
            
            cout << mass[i][j];

        }
        cout << endl;
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<w; j++) {
            cout << mass[i][j];
            if(mass[i][j] != 'v') {
                continue;
            } else {
                for(int k=0; k<8; k++) {
                    route.empty();
                    pair<int, int> location(j,i);
                    route.push_back(location);
                    bool tf = dfs(mass, j, i, k, 1);
                    if(tf) {
                        for(int l=0; l<route.size(); l++) {
                            cout << route[l].first << " " << route[l].second << endl;
                        }
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}