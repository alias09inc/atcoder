#include <bits/stdc++.h>
using namespace std;
//https://minus9d.hatenablog.com/entry/2019/07/25/212453
/*
multsetでは、重複OKのソート済集合を表現できる
*/
int main() {
    int q;
    cin >> q;
    multiset<int> st;
    int ord, num, del;

    for(int i=0; i<q; i++) {
        cin >> ord;
        if(ord == 1) {
            cin >> num;
            st.insert(num);
        } else if(ord == 2) {
            cin >> num >> del;
            while (del-- and st.find(num) != st.end()){
                st.erase(st.find(num));
            }
            
        } else {
            //最大値と最小値の差を出す
            cout << *st.rbegin() - *st.begin() << endl;
        }
    }
    return 0;
}