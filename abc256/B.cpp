#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int res = 0;
    int a;
    vector<int> mas(10,0);
    for(int i=0; i<n; i++) {
        cin >> a;
        mas.at(1)=1;
        for(int j=4; j>=1; j--) {
            mas.at(j+a) += mas.at(j);
            mas.at(j) = 0;
        }
    }
    for(int i=5; i<10; i++) {
        res += mas.at(i);
    }
    cout << res << endl;
    return 0;
}