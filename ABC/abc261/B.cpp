#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<string> list(n);
    for(int i=0; i<n; i++) {
        cin >> list.at(i);
    }
    int flag = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if(list.at(i).at(j) == 'W' and list.at(j).at(i) == 'L') {
                continue;
            } else if(list.at(i).at(j) == 'L' and list.at(j).at(i) == 'W') {
                continue;
            } else if(list.at(i).at(j) == 'D' and list.at(j).at(i) == 'D') {
                continue;
            } else if(list.at(i).at(j) == '-' and list.at(j).at(i) == '-') {
                continue;
            }
            flag = 1;
            break;
        }
        if(flag == 1) {
            break;
        }
    }
    if(flag == 0) {
        cout << "correct" << endl;
    } else {
        cout << "incorrect" << endl;
    }
    return 0;
}