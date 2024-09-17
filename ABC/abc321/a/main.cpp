#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    int n;
    cin >> n;
    int a, b;
    while (n > 0) {
        a = n % 10;
        n = n/10;
        b = n % 10;
        if (n == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        // cout << a << " " << b << endl;
        if (a >= b) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}