#include <bits/stdc++.h>
using namespace std;

void rle(string s, vector<pair<char, int>> &vec) {
    int cnt=1;
    for(int i=1; i<s.size(); i++) {
        if(s[i] != s[i-1]) {
            vec.push_back(make_pair(s[i-1], cnt));
            cnt = 0;
        }
        cnt++;
    }
    vec.push_back(make_pair(s.back(), cnt));
}

int main() {
    string s, t;
    cin >> s >> t;

    vector<pair<char, int>> s_vec, t_vec;
    
    rle(s, s_vec);
    rle(t, t_vec);

    if(s_vec.size() != t_vec.size()) {
        cout << "No" << endl;
        return 0;
    }

    bool ans = true;
    for(int i=0; i<s_vec.size(); i++) {
        if(s_vec[i].first != t_vec[i].first) ans = false;
        if(!(s_vec[i].second == t_vec[i].second || s_vec[i].second < t_vec[i].second && s_vec[i].second >= 2)) ans = false;
    }
    if(ans) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}