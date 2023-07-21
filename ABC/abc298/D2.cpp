#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace atcoder;
using mint = modint998244353;
using namespace std;

int main() {
    int Q;
    cin >> Q;
    deque<int> dq(1,1);
    mint num=1;
    int odr;

    while(Q--) {
        cin >> odr;
        if(odr == 1) {
            int tmp;
            cin >> tmp;
            num = num*10 + tmp;
            dq.push_back(tmp);
        }
        if(odr == 2) {
            int x = dq.front();
            num -= x* mint(10).pow(dq.size()-1);
            dq.pop_front();
        }
        if(odr == 3) {
            cout << num.val() << endl;
        }
    }
}