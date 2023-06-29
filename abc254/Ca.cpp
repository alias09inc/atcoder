#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

int main() {
    int n, k, j, l, m;
    cin >> n >> k;
    vector<vector<int>> lists(n,vector<int>(0));
    for(int i=0; i<n; i++) {
        j = i%k;
        cin >> l;
        lists.at(j).push_back(l);
    }
    for(int i=0; i<k; i++) {
        sort(lists[i].rbegin(), lists[i].rend());
    }
    int flag=0;
    vector<int> bb;
    for(int i=0; i<n; i++) {
        bb.push_back(lists[i%k].back());
        lists[i%k].pop_back();
    }
    for(int i=1; i<n; i++) {//一つ前の要素と比較するすなわち一つ上の要素と比較
        if(bb[i-1] > bb[i]) flag=1;
    }
    if(flag == 1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}