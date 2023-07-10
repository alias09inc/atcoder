#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    if(y > 3*x) {
        cout << x*n << endl;
    } else {
        int sho = n/3;
        n = n%3;
        //cout << sho << " " << n << endl;
        cout << sho*y + n*x << endl;
    }
    return 0;
}