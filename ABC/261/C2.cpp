#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    string st;
    int cnt;
    //set<string> sst;
    map<string, int> mp;
    for(int i=0; i<n; i++) {
        cin >> st;
        if(mp.find(st) == mp.end()) {
            cout << st << endl;
            mp[st] = 1;
        } else {
            cnt = mp[st];
            cout << st << "(" << cnt << ")" << endl;
            mp[st] = cnt + 1;
        }
    }
    return 0;
}