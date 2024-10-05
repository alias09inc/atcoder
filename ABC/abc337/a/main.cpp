#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define endl "\n"

int main() {
    int n;
    int x=0, y=0;
    int tmp_x; int tmp_y;
    cin >> n;
    rep(i, n) {
        cin >> tmp_x >> tmp_y;
        x += tmp_x;
        y += tmp_y;
    }
    // cout << x << endl << y << endl;
    if (x>y) {
        cout << "Takahashi" << endl;
    } else if (x<y) {
        cout << "Aoki" << endl;
    } else {                
        cout << "Draw" << endl;
    }
    return 0;
}