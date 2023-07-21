#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int left, right, center, ans=0;

    left = 1; right = n;
    while(right - left > 1) {
        center = left + (right-left) / 2 ;
        cout << "? " << center << "\n";
        cin >> ans;
        if(ans==0) left=center;
        else if(ans==1)right = center;
    }
    cout << "! " << left << endl;
    return 0;
}