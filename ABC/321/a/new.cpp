#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int cnt=0;
    for(int i=1000; i<=2000; i++) {
        if(i%4 == 0 && i%100 != 0 || i%400 == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}