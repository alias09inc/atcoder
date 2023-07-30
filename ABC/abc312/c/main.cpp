#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> seller(n), buyer(m);

    rep(i, n) cin >> seller.at(i);
    rep(i, m) cin >> buyer.at(i);

    int l=0, r=1e9;
    while(l+1<r) {
        int mid = (l+r)/2;
        int cnt = 0;
        rep(i, n) {
            if (seller.at(i) <= mid) cnt++;
        }
        rep(i, m) {
            if (buyer.at(i) >= mid) cnt--;
        }
        if (cnt >= 0) r = mid;
        else l = mid;
    }

    cout << r << endl;
    return 0;
}