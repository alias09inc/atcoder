#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int n;
    cin >> n;
    vector<int> res(1,1), tmp(0);
    for(int i=2; i<=n; i++) {
        res.push_back(i);
        auto itr = res.end();
        itr--;
        res.insert(res.end(),res.begin(), itr);
    }
    for(auto val:res) {
        cout << val << ' ';
    }
    cout << endl;
    return 0;
}