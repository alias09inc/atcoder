#include <bits/stdc++.h>

using namespace std;

const vector<int> dx = {0, 0, 1, -1};
const vector<int> dy = {1, -1, 0, 0};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0; i<h; i++) {
        cin >> s[i];
    }

    if(s[0][0] != 's') {
        cout << "No" << endl;
        return 0;
    }

    vector<char> next(256);
    next['s'] = 'n';
    next['n'] = 'u';
    next['u'] = 'k';
    next['k'] = 'e';
    next['e'] = 's';

    vector<vector<bool>> seen(h, vector<bool>(w));

    auto dfs = [&](auto &dfs, int i, int j) -> void {
        seen[i][j] = true;
        for(int k=0; k<4; k++) {
            int ni = i+dx[k];
            int nj = j+dy[k];
            if(ni < 0 or ni >= h or nj < 0 or nj >= w) continue;
            if(s[ni][nj] != next[s[i][j]]) continue;
            if(seen[ni][nj]) continue;
            dfs(dfs, ni, nj);
        }
    };
    dfs(dfs, 0, 0);
    cout << (seen[h - 1][w - 1] ? "Yes" : "No") << endl;
}