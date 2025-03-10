#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
aからdおきに計n-1本の仕切りをさしていってその間にあればその距離をあまりで求められる。
なかったら一番上か一番下までのきょり
*/
int main() {
    ll x,a,d,n;
    cin >> x >> a >> d >> n;
    if(d==0) {
        cout << abs(x-a) << endl;
        return 0;
    }
    if(x<a and d>0) {
        cout << abs(a-x) << endl;
        return 0;
    } else if(a<x and d<0) {
        cout << abs(x-a) << endl;
        return 0;
    }
    ll diff = abs(x-a);
    d= abs(d);
    ll syo = diff/d;
    if(syo<n-1) {
        ll ans = min(abs(diff%d),abs(d-diff%d));
        cout << ans << endl;
    } else {
        ll ans = diff - d*(n-1);
        cout << ans << endl;
    }
    return 0;
}