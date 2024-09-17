#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> lis(0,0);
    int prev;
    int current;
    cin >> prev;
    int cnt = 0;
    rep(i, n) {
        cin >> current;
        int dif = current - prev;
        prev = current;
        lis.push_back(dif);
    }
    rep(i, lis.size()) {
        cout << lis[i] << "\n";
    }
    cnt += n;
    return 0;
}