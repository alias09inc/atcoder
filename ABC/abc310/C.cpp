#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, string>> bow(n);
    for(auto& elem: bow) {
        string tmp;
        cin >> tmp;
        elem.first = tmp.length();
        elem.second = tmp;
    }

    sort(bow.begin(), bow.end());
    for(auto& elem: bow) {
        cout << elem.second << endl;
    }
    long long ans = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            string tmp = bow[j].second;
            reverse(tmp.begin(), tmp.end());
            if(bow[i].second == "A" || bow[j].second == "A") continue;
            if(bow[i].first != bow[j].first) {
                continue;
            } else if(bow[i].second == bow[j].second) {
                // cout << bow[i].second << endl;
                bow[j].second = "A";
                ans++;
            } else if(bow[i].second == tmp) {
                // cout << bow[i].second << endl;
                bow[j].second = "A";
                ans++;
            }
        }
    }
    cout << ans << endl;
}