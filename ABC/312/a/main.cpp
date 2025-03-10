#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<string> st = {"ACE","BDF", "DFA", "CEG", "EGB", "FAC", "GBD"};
    if (st.count(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}