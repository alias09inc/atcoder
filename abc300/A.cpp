#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> ans(N);
    for(int i=0; i<N; i++) {
        cin >> ans[i];
    }
    for(int i=0; i<N; i++) {
        if(A+B == ans[i]) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}