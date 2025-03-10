#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;
    int tmp;
    int roomid;
    vector<int> time(n);
    for(int i=0; i<n-1; i++) {
        if(i==0) {
            cin >> tmp;
            time.at(i) = tmp;
        } else {
            cin >> tmp;
            time.at(i) = tmp + time.at(i-1);
        }
        //cout << time.at(i) << endl;
    }
    for(int i=0; i<m; i++) {
        cin >> roomid >> tmp;
        if(t <= time.at(roomid-1)) {
            cout << "No" << endl;
            return 0;
        }
        t += tmp;
    }
    if(t >= time.at(n-1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}