#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, max=0;
    cin >> n >> k;
    vector<int> list1(n), list2(k);
    for(auto i=0; i<n; i++) {
        cin >> list1[i];
        if(list1[i] > max) {
            max = list1[i];
        }
    }
    for(auto i=0; i<k; i++) {
        cin >> list2[i];
    }
    for (auto i = 0; i < k; i++) {
        if(list1[list2[i]-1] == max) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}