#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> photo(m, vector<int>(n));
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> photo[i][j];
        }
    }
    set<pair<int, int>> good;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n-1; j++) {
            int a = min(photo[i][j], photo[i][j+1]);
            int b = max(photo[i][j], photo[i][j+1]);
            // cout << a << b << endl;
            pair<int, int> gr(a,b);
            good.insert(gr);
        }
    }
    // for(auto x : good) {
    //     cout << x.first << x.second << "\n";     // 要素を順に表示
    // }
    // pair<int, int> x = make_pair(1,4);
    // cout << good.count(x) << endl;
    int cnt=0;
    for(int i=1; i<=n; i++) {
        for(int j=i+1; j<=n; j++) {
            pair<int, int> br = make_pair(i,j);
            // cout << br.first << " " << br.second << endl;
            if(good.count(br) == 0) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}