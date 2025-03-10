#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int q;
    cin >> q;
    vector<int> df;
    int odr, num;
    rep(i, q) {
        cin >> odr >> num;
        if(odr == 1) {
            df.push_back(num);
        } else {
            cout << df.at(df.size() - num) << endl;
        }
    }
    return 0;
}