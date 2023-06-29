/*
    答え丸写し
    https://atcoder.jp/contests/abc254/editorial/4065
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool> sq(n+1,false);
    for(int i=1;i*i<=n;i++) sq[i*i]=true;//n以下の値のすべての平方数を求めてる 1^2, 2^2, 3^2
    vector<vector<int>> d(n+1);

    for(int i=1;i<=n;i++){//jの約数候補をj番目の配列に格納していく
        for(int j=i;j<=n;j+=i) d[j].push_back(i);
    }

    vector<int> cnt(n+1);
    for(int i=1;i<=n;i++){//全ての'N'に対してf(N)を求めてる？
        int f=0;
        for(int j=0;j<d[i].size();j++) if(sq[d[i][j]]) f=d[i][j];//最大の平方数を求めている
        cnt[i/f]++;//i/f(i)の値になる組み合わせを発見！(modみたいな感じ)　同じ余り(2対にならない素数)を持っているもの同士の掛け算は平方数になる
    }

    int ans=0;
    for(int i=1;i<=n;i++) ans+=cnt[i]*cnt[i];
    cout<<ans<<endl;
}
