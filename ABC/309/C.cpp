#include <bits/stdc++.h>
using namespace std;

/*
pairでaとbを受け取り、日数でソート
薬の種類と同じサイズの配列を作り、その境目の薬の変化を求めておく。
その配列がk以下になったときに前の薬が終る日にち+1を出力する
で、同じ日にちで複数の薬が終る場合があるからその際は日数が変わるまで-1でさかのぼる
*/
int main() {
    int n, k;
    cin >> n >> k;
    long long tmp_a, tmp_b;
    vector<pair<long long, long long>> medi(n);
    vector<long long> diff(n,0);
    long long sum = 0;
    for(int i=0; i<n; i++) {
        cin >> tmp_a >>  tmp_b;
        medi[i] = make_pair(tmp_a, tmp_b);
        sum += tmp_b;
    }

    // //日数の短いものからソート
    sort(medi.begin(), medi.end());

    // //aが終わる前の日数をいれて次の配列用にaが終わった次の錠数を入れている
    for(int i=0; i<n; i++) {
        diff[i] = sum;
        sum -= medi[i].second;
    }

    //暫定確認用
    // for(int i=0; i<n; i++) {
    //     cout << medi[i].first << " ";
    //     cout << diff[i] << endl;
    // }

    long long days = 100000000000;

    for(int i=0; i<n; i++) {
        if(diff[i]<=k) {
            int j = i;
            days = medi[i].first;
            while(j <= 0 && days == medi[j].first) {
                j--;
            }
            j--;
            if(j >= 0) {
                days = medi[j].first;
            } else {
                days = 0;
            }
            break;
        }
    }
    if(days == 100000000000) {
        days = medi[n-1].first;
    }

    cout << days+1 << endl;
    return 0;
}