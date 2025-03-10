#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    
    //経路の挿入
    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> vis(n,0);
    int s=0;

    for(int i=0; i<n; i++) {
        if(!vis[i]) {
            s++;
            queue<int> Q;
            Q.push(i);
            while(!Q.empty()) {
                int x = Q.front();Q.pop();
                for(int j=0; j<graph[x].size(); j++) {
                    if(!vis[graph[x][j]]) {
                        vis[graph[x][j]] = true;
                        Q.push(graph[x][j]);
                    }
                }
            }
        }
    }

    cout << m-n+s << endl;

    return 0;
}