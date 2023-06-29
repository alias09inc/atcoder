#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

ll nCk(int n, int k) {
    ll x=1;
    ll y=1;
    ll z=1;
    rep(i, n) x *= n-i;
    rep(i, n-k) y *= n-k-i;
    rep(i, k) z *= k-i;
    return(x/(y*z));
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            if(j == i) {
                cout << nCk(i,j);
            } else {
                cout << nCk(i,j) << ' ';
            }
        }
        cout << endl;
    }
}