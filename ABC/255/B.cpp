#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> akari(k);
    for(int i=0; i<k; i++) {
        cin >> akari.at(i);
        akari.at(i)--;
    }
    vector<ll> x(n),y(n);
    for(int i=0; i<n; i++) {
        cin >> x.at(i) >> y.at(i);
    }
    ll dist = 0;
    for(int i=0; i<n; i++) {
        ll idist = 1e15;
        for(int j=0; j<k; j++) {
            idist = min(idist,(x[i]-x[akari[j]])*(x[i]-x[akari[j]])+(y[i]-y[akari[j]])*(y[i]-y[akari[j]]));
        }
        dist = max(dist,idist);
    }
    printf("%.12lf\n",sqrt((double)dist));
    return 0;
}