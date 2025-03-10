#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> schedule(n);
    for(int i=0; i<n; i++) {
        cin >> schedule[i];
    }

    int steak = 0;
    int max_steak = 0;
    for(int i=0; i<d; i++) {
        bool d_free = true;
        for(int j=0; j<n; j++) {
            if(schedule[j][i]=='x') {
                d_free = false;
                break;
            }
        }
        if(d_free) {
            steak++;
        } else {
            steak = 0;
        }
        max_steak = max(max_steak, steak);
    }

    cout << max_steak << endl;
    return 0;
}