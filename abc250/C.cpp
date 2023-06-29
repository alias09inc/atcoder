#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> val(n+1), pos(n+1);
    for(int i=1;  i<=n; i++)val[i]=i, pos[i]=i;

    int Q;
    cin >> Q;

    vector<int> x(Q);
    for(int i=0; i<Q; i++) cin >> x.at(i);

    for(auto a:x) {
        int p0 = pos.at(a);
        int p1 = p0;
        if(p0!=n)p1++;
        else p1--;
        int v0 = val[p0];
        int v1 = val[p1];
        swap(val[p0],val[p1]);
        swap(pos[v0],pos[v1])
    }
}