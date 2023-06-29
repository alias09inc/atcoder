#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,k,a;
    cin >> n >> k;
    vector<pair<int, int>> card(n, pair<int,int>(0,0));
    for(int i=0; i<n; i++) {
        cin >> a;
        card.at(i).first = a;
        card.at(i).second++;
    }
}