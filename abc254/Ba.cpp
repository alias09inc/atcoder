#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<vector<ll>> results(50, vector<ll>(50));
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if(j==i) {
                results.at(i).at(j) = 1;
                cout << results[i][j] << endl;
            } else if(j==0) {
                results.at(i).at(j) = 1;
                cout << results[i][j] << ' ';
            } else {
                results.at(i).at(j) = results.at(i-1).at(j-1) + results.at(i-1).at(j);
                cout << results[i][j] << ' ';
            }
        }
    }
}