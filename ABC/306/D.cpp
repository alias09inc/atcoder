#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<long long>> dp(n, vector<long long> (2));

    int state;
    long long score;

    cin >> state >> score;
    if(score >= 0) {
        dp[0][state] = score;
    }
    // cout << endl;
    for(int i=1; i<n; i++) {
        cin >> state >> score;
        if(state == 0) {
            dp[i][0] = max({dp[i-1][0], dp[i-1][0]+score ,dp[i-1][1]+score});
            dp[i][1] = dp[i-1][1];
        } else {
            dp[i][0] = dp[i-1][0];
            dp[i][1] = max(dp[i-1][0]+score, dp[i-1][1]);
        }
        dp[i][0] = max(dp[i-1][0], dp[i][0]);
        dp[i][1] = max(dp[i-1][1], dp[i][1]);
        // cout << i << " " << dp[i][0] << " " << dp[i][1] << endl;
    }
    // for(int i=0; i<n; i++) {
    //     cout << dp[i][0] << " " << dp[i][1] << endl;
    // }

    cout << max(dp[n-1][0], dp[n-1][1]) << endl;

    return 0;
}