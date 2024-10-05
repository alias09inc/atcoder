#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int N;
    ll num = 0;
    ll tmp = 0;
    ll banpei = 0;
    cin >> N;
    rep(i, N) {
        cin >> tmp;
        num += tmp;
        num = max(banpei, num);
        // cout << num << endl;
    }
    cout << num << endl;
    return 0;
} 