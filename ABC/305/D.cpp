#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    //寝た時間と起きた時間のペア
    vector<int> sstart, send;
    //それぞれの寝ている時間の合計
    vector<int> sleep_length;
    int st, ed;
    //最初の起床に関する処理
    cin >> st;

    for(int i=0; i<(n-1)/2; i++)  {
        cin >> st >> ed;
        sstart.push_back(st); send.push_back(ed);
        // cout << history[i].first << history[i].second << endl;
        sleep_length.push_back(ed-st);
    }

    //クリエ用
    int Q;
    cin >> Q;
    //lが始まり rが終わり

    while(Q--) {
        int length = 0;
        cin >> st >> ed;
        if(st < sstart[0]) {
            int sindex = 0;
        }
    }
}