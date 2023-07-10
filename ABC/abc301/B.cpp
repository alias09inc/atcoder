#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> gaps(n);
    for(int i=0; i<n; i++) {
        cin >> gaps[i];
    }
    for(int i=0; i<n-1; i++) {
        if(gaps[i]<gaps[i+1]) {
            for(int j=gaps[i]; j<gaps[i+1]; j++) {
                cout << j << ' ';
            }
        }
        else {
            for(int j=gaps[i]; j>gaps[i+1]; j--) {
                cout << j << ' ';
            }
        }
    }
    cout << gaps[n-1];
    return 0;
}