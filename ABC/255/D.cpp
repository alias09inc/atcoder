#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
/*
昇順ソートから動的計画法で総和を計算
先頭からXより小さい値の合計値を個数×Xから引き、Xより大きいところからケツまでの和に対しても同様の作業をする。
*/
int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> nums(n);
    rep(i,n) cin >> nums.at(i);
    sort(nums.begin(), nums.end());
    vector<ll> sums(n+1,0);
    //sums.at(0) = nums.at(0);
    rep(i, n) sums.at(i+1) = sums.at(i)+nums.at(i);
    ll x;
    rep(i, q) {
        cin >> x;
        int st=0, fi=n-1;//startとfinish
        while(st<=fi) {
            int te=(st+fi)/2;//真ん中を求める
            if(nums[te]<x){st=te+1;}//半分より後ろにある場合
            else{fi=te-1;}//半分より前にある場合
        }
        ll res=x*st;
        res-=sums[fi+1];//x以下の総和
        res+=(sums[n]-sums[st]);//x以上の総和
        res-=x*(n-st);
        cout << res << endl;
    }
    return 0;
}