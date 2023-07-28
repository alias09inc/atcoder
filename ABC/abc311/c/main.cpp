#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> E(n+1);
    for(int i=1; i<=n; i++) {
        int a;
        cin >> a;
        a;
        E[i] = a;
    }

    vector<int> fl(n+1, 0), s;
    int v=1;
    while(fl[v]==0) {
        fl[v]=1;
        s.push_back(v);
        v=E[v];
    }

    vector<int> res;
    for(auto &nx: s) {
        if(nx==v){v=-1;}
        if(v==-1){res.push_back(nx);}
    }

    cout << res.size() << endl;
    for(int i=0; i<res.size(); i++) {
        if(i){cout << " ";}
        cout << res[i];
    }
    cout << endl;
    return 0;
}