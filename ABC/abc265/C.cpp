#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=0, j=0, h, w;
    cin >> h >> w;
    vector<string> belt(h);
    for(auto& s: belt) cin >> s;

    vector<vector<bool>> vis(h, vector<bool>(w, false));

    while(1) {
        if(vis[i][j]) {
            cout << -1 << endl;
            return 0;
        }
        vis[i][j] = true;
        if(belt[i][j] == 'U' && i>0) i--;
        else if(belt[i][j] == 'D' && i<h-1) i++;
        else if(belt[i][j] == 'L' && j>0) j--;
        else if(belt[i][j] == 'R' && j<w-1) j++;
        else break;
    }
    cout << i+1 << " " << j+1 << endl;
}