#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    if(m >= x) {
        cout << t << endl;
        return 0;
    } else {
        int dif = abs(x-m);
        cout << t - (dif*d) << endl;
        return 0;
    }
}