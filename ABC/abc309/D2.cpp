#include <bits/stdc++.h>
using namespace std;

int get(vector<vector<int>> E, int s) {
    int n = E.size();
    vector<int> dist(n, -1);

    dist[s] = 0;
    queue<int> Q;
    Q.push(s);

    while(!Q.empty()) {
        int x = Q.front();
        Q.pop();
        //bfd
        for(int i=0; i<E[x].size(); i++) {
            int y = E[x][i];
            if(dist[y] == -1) {
                dist[y] = dist[x]+1;
                Q.push(y);
            }
        }
    }
}

int main() {
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
}