#include <bits/stdc++.h>
using namespace std;

/*
方針
BFSのアルゴリズムを用いる
BFSを再帰で呼ぶ時に何回目かを呼ぶ。そしてその回数を5で割った余りのmojiと迷路の文字が一致するかを調べる
*/


vector<string> maze;
string moji = "snuck";
vector<vector<bool>> visit;

vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

struct Corr {
    int y;
    int x;
    int depth;
};
int x, y, depth;
int h, w;
int g_y, g_x;



queue<Corr> q;

bool bfs() {
    while (!q.empty()) {
        Corr now = q.front(); q.pop();
        y  = now.y, x = now.x, depth = now.depth;
        if(y == g_y  && x == g_x) return true;

        for(int i=0; i<4; i++) {
            Corr next = {y + dy[i], x+dx[i], depth+1};
            if(0 <= next.y && next.y < h && 0 <= next.x && next.x < w && maze[next.y][next.x] == moji[i%5] && visit[next.y][next.x]) {
                visit[next.y][next.x] = true;
                q.push(next);
            }
        }
    }
    return 0;
}

int main() {
    //迷路のサイズとゴールを確認
    cin >> h >> w;
    g_y = h-1; g_x = w-1;
    //迷宮用の配列を生成
    maze.resize(h);
    visit.resize(h, vector<bool>(w, false));
    for(int i=0; i<h; i++) {
        cin >> maze[i];
        // cout << maze[i] << endl;
    }

    auto tf = bfs();
    cout << tf << endl;
    return 0;

}