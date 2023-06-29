#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//12時から時計回りに
ll dx[8] = {0,1,1,1,0,-1,-1,-1};
ll dy[8] = {1,1,0,-1,-1,-1,0,1};

ll dfs(int n,int i, int x, int y, vector<vector<bool>> &visit, vector<vector<ll>> &board) {
    if(visit[y][x]==true || i==0) return 0;
    if(x < 0 || x >= n) {
        x = x%n;
    }
        if(y < 0 || y >= n) {
        y = y%n;
    }
    visit[y][x] = true;
    if(i==1) return board[y][x];
    ll max_num = max({
        dfs(n,--i, x+dx[0], y+dy[0], visit, board),
        dfs(n,--i, x+dx[1], y+dy[1], visit, board),
        dfs(n,--i, x+dx[2], y+dy[2], visit, board),
        dfs(n,--i, x+dx[3], y+dy[3], visit, board),
        dfs(n,--i, x+dx[4], y+dy[4], visit, board),
        dfs(n,--i, x+dx[5], y+dy[5], visit, board),
        dfs(n,--i, x+dx[6], y+dy[6], visit, board),
        dfs(n,--i, x+dx[7], y+dy[7], visit, board)}
    );
    max_num += board[y][x]*pow(10, to_string(max_num).size());
}

int main() {
    int n;
    cin >> n;
    vector<vector<long long>> mas(n, vector<long long>(n));
    vector<pair<int, int>> max_index(0);
    long long max_num = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mas.at(i).at(j);
            if(mas.at(i).at(j)>max_num) max_num = mas.at(i).at(j);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mas.at(i).at(j) == max_num) {
                max_index.emplace_back(i,j);
            }
        }
    }
    max_num = 0;
    for(int i=0; i<max_index.size(); i++) {
        vector<vector<bool>> visit(n,vector<bool>(n,0));
        ll this_num;
        int y = max_index.at(i).first;
        int x = max_index.at(i).second;
        ll max_d = dfs(n,n,x,y,visit,mas);
        max_num = max(max_num, max_d);
    }
    cout << max_num << endl;
    return 0;
}