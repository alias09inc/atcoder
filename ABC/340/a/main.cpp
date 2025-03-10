#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int a,b,d;
    cin >> a >> b >> d;
    int cnt = a;
    while (cnt <= b)
    {
        cout << cnt << " ";
        cnt +=  d;
    }
    cout << endl;
    
    return 0;
}