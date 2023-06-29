#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string st;
    cin >> st;
    int t = 0; 
    int s = 0;
    
    for(int i=0; i<n; i++) {
        if(st[i] == 'T') {
            t++;
        } else {
            s++;
        }
    }
    
    if(t > s) {
        cout << 'T' << endl;
    } else if(t < s) {
        cout << 'A' << endl;
    } else {
        if(st[n-1] == 'T') {
            cout << 'A' << endl;
        } else {
            cout << 'T' << endl;
        }
    }

    return 0;
}