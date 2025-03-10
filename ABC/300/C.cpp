#include <bits/stdc++.h>
using namespace std;

//crossの周辺域、先頭から順に左上、右上、右下、左下
const vector<int> dx = {-1, 1, 1, -1};
const vector<int> dy = {1, 1, -1, -1};

int h, w;
vector<int> cross_cnt;

int check_depth(vector<string>& field, int direction, int x, int y) {
    int nx = x + dx[direction];
    int ny = y + dy[direction];
    int cnt = 0;
    while(0 <= nx && nx < w && 0 <= ny && ny < h && field[ny][nx] == '#') {
        cnt++;
        nx += dx[direction];
        ny += dy[direction];
    }
    return cnt;
}

int count_cross(vector<string>& field) {
    for(int i=0; i<w; i++) {
        for(int j=0; j<h; j+=1) {
            if(field[j][i] == '#') {
                int cnt = min({
                    check_depth(field, 0, i, j),
                    check_depth(field, 1, i, j),
                    check_depth(field, 2, i, j),
                    check_depth(field, 3, i, j)
                });
                // cout << j << " " << i << " ";
                // cout << cnt << endl;
                if(cnt != 0) {
                    cross_cnt[cnt-1]++;
                }
            }
        }
    }
    return 0;
}

int main() {
    cin >> h >> w;
    vector<string> field(h);
    for(int i=0; i<h; i++) {
        cin >> field[i];
    }
    cross_cnt.resize(min(h,w));

    // cout << h << " " << w << endl;

    count_cross(field);

    for(int i=0; i<cross_cnt.size(); i++) {
        cout << cross_cnt[i] << " ";
    }
    cout << endl;
}