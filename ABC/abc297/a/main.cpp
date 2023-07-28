#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> time(n);
    for(int i=0; i<n; i++) {
        cin >> time[i];
    }

    int dtime=-1;
    for(int i=0; i<n-1; i++) {
        if(time[i+1] - time[i] <= d) {
            dtime = time[i+1];
            break;
        }
    }
    cout << dtime << endl;
    return 0;
}