#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long long t;
    cin >> n >> m >> t;
    vector<int> a(n+1,0), bonus(n+1,0);
    for(int i=1; i<n; i++) {
        cin >> a.at(i);
    }
    for(int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        bonus.at(x) = y;
    }
    for(int i=1; i<n; i++) {
        if(t<=a[i]) {
            cout << "No" << endl;
            return 0;
        }
        t-=a.at(i);
        t+=bonus.at(i+1);
    }
    cout << "Yes" << endl;
    return 0;
}