#include <bits/stdc++.h>
using namespace std;

pair<int, int> move(pair<int, int> location, char action) {
    pair<int, int> next_location;
    switch (action)
    {
    case 'R':
        next_location = make_pair(location.first+1, location.second);
        break;
    
    case 'L':
        next_location = make_pair(location.first-1, location.second);
        break;
    
    case 'U':
        next_location = make_pair(location.first, location.second+1);
        break;

    case 'D':
        next_location = make_pair(location.first, location.second-1);
        break;
    
    default:
        break;
    }

    return next_location;
}

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    int x, y; // for item location
    set<pair<int,int>> item_location;
    for(int i=0; i<m; i++) {
        cin >> x >> y;
        pair<int, int> item = make_pair(x, y);
        item_location.insert(item);
    }
    pair<int, int> current_location = make_pair(0,0);
    for(int i=0; i<s.length(); i++) {
        current_location = move(current_location, s[i]);
        h--;
        if(h < 0) {
            cout << "No" << endl;
            return 0;
        }
        if(h < k && item_location.find(current_location) != item_location.end()) {
            h = k;
            item_location.erase(current_location);
        }
    }
    cout << "Yes" << endl;
    return 0;
}