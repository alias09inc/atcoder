#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, long long>> pp(n);
    long long min = 10000000000;
    int index = 0;
    string s; long long age;

    for(int i=0; i<n; i++) {
        cin >> s >> age;
        if (age < min) {
            min = age;
            index = i;
        }
        pp[i].first = s;
        pp[i].second = age;
    }

    for(int i=index; i<n; i++) {
        cout << pp[i].first << endl;
    }
    for(int i=0; i<index; i++) {
        cout << pp[i].first << endl;
    }
    return 0;
}