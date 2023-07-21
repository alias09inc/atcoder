#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> maze, set<int>& vis, int y, int x) {
    set<int> vis2 = vis;
    if(y >= maze.size() || x >= maze[0].size()) return 0;
    if(vis.count(maze[y][x])) return 0;
    if(y == maze.size()-1 && x == maze[0].size()-1 && vis.count(maze[y][x]) == 0) return 1;
    vis2.insert(maze[y][x]);
    int cnt = dfs(maze, vis2, y+1, x) + dfs(maze, vis2, y, x+1);
    return cnt;
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> maze(h, vector<int>(w));

    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin >> maze[i][j];
        }
    }

    set<int> vis;
    cout << dfs(maze, vis, 0, 0) << endl;
}