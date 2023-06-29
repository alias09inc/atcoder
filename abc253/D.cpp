#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, a, d;
    cin >> n >> a >> d;
    ll sum=0;
    sum = n*(n+1)/2;
    ll max_a = n/a, max_d=n/d;
    ll seki = lcm(a,d);
    ll max_seki = n/seki;
    a = a*max_a*(max_a+1)/2;
    d = d*max_d*(max_d+1)/2;
    seki = seki*max_seki*(max_seki+1)/2;
    sum = sum-a-d+seki;
    cout << max_seki << endl;
    cout << sum << endl;
}