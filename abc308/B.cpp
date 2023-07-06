#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> eat(n), colors(m);
    vector<int> price_list(m);
    map<string, int> price;
    int others;


    for(int i=0; i<n; i++) {
        cin >> eat[i];
    }
    for(int i=0; i<m; i++) {
        cin >> colors[i];
    }

    cin >> others;
    for(int i=0; i<m; i++) {
        cin >> price_list[i];
    }
    for(int i=0; i<m; i++) {
        price[colors[i]] = price_list[i];
    }

    int sum=0;
    for(int i=0; i<n; i++) {
        if(price[eat[i]] == 0) {
            sum += others;
        } else {
            sum += price[eat[i]];
        }
    }
    cout << sum << endl;
}