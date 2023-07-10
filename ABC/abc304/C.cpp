#include <bits/stdc++.h>
using namespace std;

long long N, D;
vector<long long> X, Y;

bool is_connected(int i, int j) {
    long long dis = (X[i]-X[j]) * (X[i]-X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]);
    return dis <= D*D;
}

void dfs(int v, vector<bool> &seen) {
    seen[v] = true;
    for(int v2=0; v2<N; v2++) {
        if(seen[v2]) continue;
        if(is_connected(v,v2)) dfs(v2,seen);
    }
}


int main() {
    cin >> N >> D;
    X.resize(N); Y.resize(N);
    for(long long i=0; i<N; i++) {
        cin >> X[i] >> Y[i];
    }

    vector<bool> seen(N, false);
    dfs(0, seen);

    for (int v = 0; v < N; v++) {
        cout << (seen[v] ? "Yes" : "No") << endl;
    }
}