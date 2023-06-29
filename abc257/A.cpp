#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    string alp = "ABCEDFGHIJELMNOPQRSTUVWXYZ";
    vector<char> moji(0);
    for(int i=0; i<26; i++) {
        for(int j=0; j<n; j++) {
            moji.push_back(alp[i]);
        }
    }
    printf("%c", moji[m-1]);
    return 0;
}