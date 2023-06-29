#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> sets;
    vector<pair<string, int>> scores(0);
    pair<string,int> sakuhin;

    for(int i=0; i<n; i++) {
        cin >> sakuhin.first >> sakuhin.second;
        if(sets.find(sakuhin.first) == sets.end()) {
            //cout << sakuhin.first << " not exist " << sakuhin.second << endl;
            sets.insert(sakuhin.first);
            scores.push_back(sakuhin);
            continue;
        }
        sakuhin.second = -1;
        //cout << sakuhin.first << " exist " << sakuhin.second << endl;
        scores.push_back(sakuhin);
    }
    int max=scores.at(0).second, max_index=0;
    for(int i=1; i<scores.size(); i++) {
        if(scores.at(i).second > max) {
            max = scores.at(i).second;
            max_index = i;
        }
    }
    cout << max_index+1 << endl;
}