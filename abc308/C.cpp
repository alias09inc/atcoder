#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    vector<pair<long double, int>> odr(num);
    long double a, b, c;
    for(int i=0; i<num; i++) {
        cin >> a >> b;
        c = a/(a+b);
        odr[i] = make_pair(c, -1*(i+1));
    }
    sort(odr.rbegin(), odr.rend());
    for(int i=0; i<num; i++) {
        cout << -1*odr[i].second << endl;
    }
    return 0;
}