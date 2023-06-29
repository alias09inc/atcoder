#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<pair<int, int>> ans_set(n);
    set<int> kinds;
    int weight;
    for(int i=0; i<n; i++) {
        cin >> weight;
        kinds.insert(weight);
        ans_set.at(i).first = weight;
        ans_set.at(i).second = s[i]-'0';
    }
    sort(ans_set.begin(), ans_set.end());
    //collect_ansのfirstに子供、secondに大人の人数
    vector<pair<int, int>> collect_ans(kinds.size(),pair<int, int>(0,0));
    weight = ans_set.at(0).first;//最小の体重
    int i_banme=0;//重さの添え字
    for(int i=0; i<n; i++) {
        if(ans_set.at(i).first != weight) {
            //新しい体重になった場合
            i_banme++;
            weight = ans_set.at(i).first;
            collect_ans.at(i_banme).first = collect_ans.at(i_banme-1).first;
        }
        if(ans_set.at(i).second==0)collect_ans.at(i_banme).first++;
        
    }
    //ここまではOK
    
    weight = ans_set.at(n-1).first;
    i_banme = kinds.size()-1;
    //cout << weight << ' ' << i_banme << endl;
    
    for(int i=n-1; i>=0; i--) {
        if(ans_set.at(i).first != weight) {
            //新しい体重になった場合
            i_banme--;
            weight = ans_set.at(i).first;
            collect_ans.at(i_banme).second = collect_ans.at(i_banme+1).second;
        }
        if(ans_set.at(i).second==1)collect_ans.at(i_banme).second++;
        
    }
    
    /*
    for(int i=0; i<n; i++) {
        cout << collect_ans.at(i).first << collect_ans.at(i).second << endl;
    }
    */
    vector<int> dist(kinds.size()+1,0);
    int child, adalt;
    for(int i=0; i<=kinds.size(); i++) {
        if(i==0) child=0;
        else child=collect_ans.at(i-1).first;

        if(i>=kinds.size()) adalt=0;
        else adalt=collect_ans.at(i).second;

        dist.at(i) = child + adalt;
    }
    int max = *max_element(dist.begin(), dist.end());
    cout << max << endl;
    
    return 0;
}