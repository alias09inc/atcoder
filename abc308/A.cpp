#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> lst(8,0);
    for(int i=0; i<8; i++) {
        cin >> lst[i];;
    }
    bool tf = true;
    for(int i=0; i<7; i++) {
        if(lst[i] > lst[i+1]) tf=false;
    }
    for(int i=0; i<8; i++) {
        if(lst[i] < 100) tf=false;
        if(lst[i] > 675) tf=false;
        if(lst[i]%25 !=0) tf=false;
    }
    if(tf) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}