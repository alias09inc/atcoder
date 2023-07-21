#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> cnt_app(n,0);
    vector<pair<int, int>> centers;
    for(int i=0; i<3*n; i++) {
        cin >> x;
        x--;
        cnt_app[x]++;
        if(cnt_app[x] == 2) {
            centers.push_back(make_pair(i, x+1));
        }
    }
    // cout << "inserted" << endl;
    sort(centers.begin(), centers.end());
    for(int i=0; i<centers.size(); i++) {
        cout << centers[i].second << " ";
    }
    cout << "\n";
    return 0;
}