#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    vector<int> duplicate(10,0);
    vector<set<int>> appearance(10);
    string slot;
    cin >> n;
    int chara;
    for(int i=0; i<n; i++) {
        cin >> slot;
        for(int j=0; j<10; j++) {
            chara = slot[j] - '0';
            if(appearance[chara].count(j) > 0) {
                duplicate[chara]++;
            } else {
                appearance[chara].insert(j);
            }
        }
    }
    int min_value = duplicate[0];
    for(int i=1; i<10; i++) {//最小値の保存
        if(duplicate[i] > min_value) min_value = duplicate[i];
    }
    vector<int> candidate;
    for(int i=0; i<10; i++) {
        if(duplicate[i] == min_value) candidate.push_back(i);
    }
    int candidate_num = candidate.size();
    if(candidate_num > 1) {
        vector<int> candidate_time(candidate_num);
        for(int i=0; i<candidate_num; i++) {
            for(auto itr = appearance[i].begin(); itr != appearance[i].end(); ++itr) {
                candidate_time[i] += *itr;
            }
        }
    }
}