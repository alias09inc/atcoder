#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

int main() {
    int n,k;
    cin >> n >> k;
    vector<ll> lists(n);
    for(int i=0; i<n; i++) {
        cin >> lists.at(i);
        if(i<k) continue;
        if(lists.at(i) < lists.at(i-k)) {
            //cout << lists.at(i) << lists.at(i-k) << endl;
            ll temp = lists.at(i);
            lists.at(i) = lists.at(i-k);
            lists.at(i-k) = temp;
        }
    }
    int flag=0;
    //cout << lists.at(0);
    for(int i=1; i<n; i++) {
        if(lists.at(i) < lists.at(i-1)) flag = 1;
        //cout << lists.at(i);
    }
    if(flag == 1) {
        cout << "No" << endl;
    } else {
        cout << "Yes"<< endl;
    }
    return 0;
}