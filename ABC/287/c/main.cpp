#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> E(n);
    if(m != n-1) {
        cout << "No" << endl;
        return 0;
    }
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        E[a].push_back(b);
        E[b].push_back(a);
    }

    bool path = true;
    for(int i=0; i<n; i++) {
        if(E[i].size() > 2) {
            path = false;
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> visited(n, false);
    queue<int> q;
    visited[0] = true;
    q.push(0);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int u : E[v]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
    rep(i, n) {
        if(!visited[i]) {
            path = false;
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}