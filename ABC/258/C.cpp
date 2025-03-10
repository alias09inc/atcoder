#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,q;
    string s;
    cin >> n >> q;
    cin >> s;
    int odr, index, head=0;
    for(int i=0; i<q; i++) {
        cin >> odr;
        if(odr == 1) {
            cin >> index;
            index = n - index;
            head += index;
            head = head % n;
        } else {
            cin >> index;
            index += head;
            index = index % n;
            if(index == 0) {
                cout << s[n-1] << endl;
            } else {
                cout << s[index-1] << endl;
            }
        }
    }
    return 0;
}