#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= b && b <= c) {
        cout << "Yes" << endl;
        return 0;
    } else if(a >= b && b>= c) {
        cout << "Yes" << endl;
        return 0;
    } else {
        cout << "No" << endl;
    }
}