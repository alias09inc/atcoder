#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int a;
    vector<pair<int, int>> math, eng, sums;
    set<int> go;
    for(int i=1; i<=n; i++) {
        cin >> a;
        math.push_back({a,i*-1});
    }
    for(int i=1; i<=n; i++) {
        cin >> a;
        eng.push_back({a,i*-1});
        sums.push_back({math.at(i-1).first+a,i*-1});
    }
    sort(math.rbegin(),math.rend());
    sort(eng.rbegin(),eng.rend());
    sort(sums.rbegin(),sums.rend());

    int i=0, j=0;
    while(i != x) {
        //cout << abs(math.at(j).second) << endl;
        go.insert(math.at(j++).second);
        i++;
    }
    i=0;j=0;
    while(i != y) {
        if(go.find(eng.at(j).second) == go.end()) {
            //cout << abs(eng.at(j).second) << endl;
            go.insert(eng.at(j).second);
            i++;
        }
        j++;
    }
    i=0;j=0;
    while(i != z) {
        if(go.find(sums.at(j).second) == go.end()) {
            //cout << abs(sums.at(j).second) << endl;
            go.insert(sums.at(j).second);
            i++;
        }
        j++;
    }
    vector<int> ans;
    for(auto x:go) {
        ans.push_back(abs(x));
    }
    sort(ans.begin(), ans.end());
    for(auto x:ans) {
        cout << x << endl;
    }
    return 0;
}