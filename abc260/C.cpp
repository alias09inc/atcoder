#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<pair<ll, ll>> houseki(13,pair<ll,ll>(0,0));
    houseki.at(1).first = 1;
    houseki.at(1).second = 0;
    for(int i=1; i<n; i++) {
        houseki.at(i).second += x*houseki.at(i).first;
        houseki.at(i+1).first += houseki.at(i).first;
        houseki.at(i+1).first += houseki.at(i).second;
        houseki.at(i+1).second += y*houseki.at(i).second;
    }
    /*
    for(auto x :houseki) {
        cout << x.first << " " << x.second << endl;
    }*/
    cout << houseki.at(n).second << endl;
    return 0;
}