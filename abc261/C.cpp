#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    string st;
    multiset<string> mst;
    for(int i=0; i<n; i++) {
        cin >> st;
        if(mst.count(st) == 0) {
            cout << st << endl;
        } else {
            cout << st << "(" << mst.count(st) << ")" << endl;
        }
        mst.insert(st);
    }
    return 0;
}