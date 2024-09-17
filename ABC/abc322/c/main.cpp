#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i, m) cin >> a.at(i);
    int index = 0;
    rep(i, n) {
        cout << a.at(index) - i - 1 << endl;
        if (a.at(index) - i - 1 == 0) {
            index++;
        }
    }

    return 0;
}