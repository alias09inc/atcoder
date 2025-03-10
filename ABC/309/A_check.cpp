#include <bits/stdc++.h>
using namespace std;

#define ll long long

int abc(int a, int b) {

    if(b-a==3) {
        cout << "Yes";
    } else if(b-a==1 && (a!=3 && a!=6)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

int main() {
    for(int i=1; i<9; i++) {
        for(int j=i+1; j<=9; j++) {
            cout << i << " " << j << " " << abc(i,j) << endl;
        }
        cout << endl;
    }
}