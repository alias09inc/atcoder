#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n, p;
    cin >> n >> p;

    int max=0;
    rep(i, n-1) {
        int a;
        cin >> a;
        if (a > max) max = a;
    }
    if(p>max) cout << 0 << endl;
    else cout << max-p+1 << endl;
    return 0;
}