#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    int n = 21;
    if(k>=60) {
        n++;
        k = k % 60;
    }
    cout << n << ":";
    if(k<10) {
        cout << "0" << k << endl;
    } else {
        cout << k << endl;
    }
    return 0;
}