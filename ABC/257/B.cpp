#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> mas(k+1,0);
    int koma;
    for(int i=0; i<k; i++) {
        cin >> koma;
        mas[i+1]=koma;
    }
    int qurie;
    for(int i=0; i<q; i++) {
        cin >> qurie;
        //cout << "qurie" << endl;
        if(mas[qurie] == n) {
            continue;
        } else if(qurie == k) {
            mas[qurie] = mas[qurie]+1;
        } else if(mas[qurie]+1 != mas[qurie+1]) {
            mas[qurie] = mas[qurie]+1;
        }
    }
    for(int i=1; i<=k; i++) {
        cout << mas[i] << ' ';
    }
    cout << endl;
    return 0;
}