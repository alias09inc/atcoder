#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,z;
    cin >> r >> z;
    int a,b,c,d,e,f,g,h;
    cin >> a >> b;
    cin >> c >> d;
    e = a*a + b*c; f = a*b + b*d;
    g = c*a + d*c; h = c*b + d*d;
    if(r==1) {
        if(z==1) {
            cout << a;
        } else {
            cout << b;
        }
    } else {
        if(z==1) {
            cout << c;
        } else {
            cout << d;
        }
    }
    cout << endl;
    return 0;
}