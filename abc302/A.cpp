#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    // cout << a/b;
    if(a%b > 0) {
        cout << a/b + 1 << endl;
    } else {
        cout << a/b << endl;
    }
    return 0;
}