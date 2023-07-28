#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sums(n);
    for(int i=0; i<7*n; i++) {
        int tmp;
        cin >> tmp;
        sums[i/7] += tmp;
    }

    for(int i=0; i<n; i++) {
        cout << sums[i] << " ";
    }
    cout << endl;
    return 0;
}