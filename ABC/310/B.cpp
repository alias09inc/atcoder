#include <bits/stdc++.h>
using namespace std;

bool upgrade(vector<int> price, vector<set<int>> func, int i, int j) {
    if(price[i]<price[j]) swap(i, j);
    else if(price[i] == price[j] and func[i].size() > func[j].size()) swap(i,j);
    // bool tf = true;
    for(auto x: func[i]) {
        if(func[j].count(x) == 0) return false;
    }
    if(price[i] > price[j]) {
        // cout << "price " << i << " " << j << endl;
        return true;
    }
    else if(func[i].size() < func[j].size()) {
        // cout << "func " << i << " " << j << endl;
        return true;
    }
    return false;
} 

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> price;
    vector<set<int>> func(n);

    //データの挿入
    for(int i=0; i<n; i++) {
        int p;
        cin >> p;
        price.push_back(p);
        int c;
        cin >> c;
        for(int j=0; j<c; j++) {
            int fn;
            cin >> fn;
            func[i].insert(fn);
        }
    }
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            bool tf = upgrade(price, func, i, j);
            if(tf) {
                // cout << i << " " << j << " ";
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}