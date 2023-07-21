#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

int cnt_around(int y, int x, int h, int w, vector<string>& mm) {
    int cnt = 0;
    for(int i=0; i<4; i++) {
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny>=0 && ny<h && nx>=0 && nx<w && mm[ny][nx] == '#') cnt++;
    }
    return cnt;
}

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> mm(h);
    for(auto& elem: mm) cin >> elem;

    for(int i=0; i<h; i++) {
        // cout << mm[i];
        for(int j=0; j<w; j++) {
            if(mm[i][j] != '#') {
                int cnt = cnt_around(i, j, h, w, mm);
                // cout << cnt << endl;
                if(cnt >= 2) {
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}