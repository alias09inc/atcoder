#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    rep(i, n) {
        if((i+1)%x == 0) {
            cout << "A";
        }
        if((i+1)%y == 0) {
            cout << "B";
        }
        if((i+1)%x != 0 and (i+1)%y != 0) {
            cout << "N";
        }
        cout << endl;
    }
    return 0;
}