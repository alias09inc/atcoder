#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> alist,blist;
    set<ll> aset, bset;
    ll tmp;
    for(ll i=0; i<n; i++) {
        cin >> tmp;
        if(!aset.count(tmp)) {
            aset.insert(tmp);
            alist.push_back(tmp);
        }
    }

    for(ll i=0; i<m; i++) {
        cin >> tmp;
        if(!bset.count(tmp)) {
            bset.insert(tmp);
            blist.push_back(tmp);
        }
    }

    sort(alist.begin(), alist.end());
    for(auto& a: alist) cout << a << " ";
    cout << "\n";
    sort(blist.begin(), blist.end());
    for(auto& b: blist) cout << b << " ";
    cout << "\n";

    ll ans = -1;
    for(int i=0; i<alist.size(); i++) {
        for(int j=0; j<blist.size(); j++) {
            tmp = abs(alist[i] - blist[j]);
            if(tmp > d) break;
            else {
                tmp = ans;
                ans = max(ans, alist[i]+blist[j]);
                if(ans != tmp) cout << ans << "\n";
            }
        }
    }
    cout << ans << endl;
}