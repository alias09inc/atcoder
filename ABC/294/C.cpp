#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> a,b;
    vector<int> c;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
        c.push_back(tmp);
    }
    // cout << "insert A" << endl;
    for(int i=0; i<m; i++) {
        int tmp;
        cin >> tmp;
        b.insert(tmp);
        c.push_back(tmp);
    }
    // cout << "insert B" << endl;
    sort(c.begin(), c.end());

    vector<int> a_index, b_index;

    for(int i=0; i<c.size(); i++) {
        int tmp = c[i];
        if(a.find(tmp) != a.end()) {
            a_index.push_back(i);
        } else {
            b_index.push_back(i);
        }
    }
    // cout << "end" << endl;
    for(auto& elem: a_index) cout << elem+1 << " ";
    cout << endl;
    for(auto& elem: b_index) cout << elem+1 << " ";
    cout << endl;
}