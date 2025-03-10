#include <bits/stdc++.h>
using namespace std;

int get(vector<vector<int>> E, int s) {
    int se = E.size();
    vector<int> dist(se, -1);

    queue<int> Q;
    Q.push(s);
    dist[s] = 0;
    while(!Q.empty()) {
        int x=Q.front(); Q.pop();
        for(int i=0; i<E[x].size(); i++) {
            int y = E[x][i];
            if(dist[y] == -1) {
                dist[y] = dist[x]+1;
                Q.push(y);
            }
        }
    }
    return *max_element(dist.begin(), dist.end());
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
    cout << get(E, 0) + get(E, N1+N2-1) + 1 << endl;
}