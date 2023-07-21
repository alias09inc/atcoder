#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n,0);
    for(auto& elem: d) cin >> elem;
    sort(d.begin(), d.end());

    cout << min(p, q+d[0]) << endl;
    return 0;
}