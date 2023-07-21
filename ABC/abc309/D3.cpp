#include <bits/stdc++.h>
using namespace std;

/*
方針としてはBFS
*/
int get(vector<vector<int>> E, int s) {
    vector<int> dist(E.size(), -1);

    queue<int> Q;
    dist[s] = 0;
    Q.push(s);
    while (!Q.empty())
    {
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

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;

    vector<vector<int>> E(n1+n2);
    int a, b;
    //エッジ(辺)の情報を追加する
    for(int i=0; i<m; i++) {
        cin >> a >> b;
        a--; b--;
        E[a].push_back(b);
        E[b].push_back(a);
    }

    cout << get(E, 0) + get(E, n1+n2-1) + 1 << endl;

    return 0;
}