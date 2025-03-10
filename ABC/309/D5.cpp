#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>> E, int s) {
    int t = E.size();
    vector<int> dist(t, -1);

    queue<int> Q;
    dist[s] = 0;
    Q.push(s);
    while(!Q.empty()) {
        int x = Q.front();
        Q.pop();
        for(int i=0; i<E[x].size(); i++) {
            int y = E[x][i];
            if(dist[y] == -1) {
                dist[y] = dist[x] + 1;
                Q.push(y);
            }
        }
    }
    return *max_element(dist.begin(), dist.end());
}

int main()  {
    int N1, N2, M;
    cin >> N1 >> N2 >> M;
    vector<vector<int>> E(N1+N2);

    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        E[a].push_back(b);
        E[b].push_back(a);
    }


    //bfsの実装
    cout << bfs(E, 0) + bfs(E, N1+N2-1) + 1 << endl;
}