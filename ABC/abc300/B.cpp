#include <bits/stdc++.h>
using namespace std;

/*
パリティビット的な考え方
横方向の#の数をBと一致させた後、
縦方向の#の数をBと一致できるかどうか
任意の入れ替えではなくスロットのように回転式である
*/

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h),b(h);
    for(int i=0; i<h; i++) {
        cin >> a[i];
    }
    for(int i=0; i<h; i++) {
        cin >> b[i];
    }
    vector<int> a_h(h,0), b_h(h,0), a_w(w,0), b_w(w,0);
    for(int i=0; i<h; i++) {
        a_h[i] = count(a[i].begin(), a[i].end(), '#');
        b_h[i] = count(b[i].begin(), b[i].end(), '#');
    }
    bool flag = false;
    //行方向でまずマッチングできるかどうか
    for(int i=0; i<h; i++) {
        bool tf = true;
        for(int j=i; j<h+i; j++) {
            if(a_h[j%h] != b_h[j-i]) {
                tf = false;
                break;
            }
        }
        if (tf) {
            flag = true;
            break;
        }
    }

    if(!flag) {
        cout << "No" << endl;
        return 0;
    }

    for(int i=0; i<w; i++) {
        for(int j=0; j<h; j++) {
            if(a[j][i] == '#') a_w[j]++;
            if(b[j][i] == '#') b_w[j]++;
        }
    }

    flag == false;
    for(int i=0; i<w; i++) {
        bool tf = true;
        for(int j=i; j<w+i; j++) {
            if(a_w[j%w] != b_w[j-i]) {
                tf = false;
                break;
            }
        }
        if (tf) {
            flag = true;
            break;
        }
    }

    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}