#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string st = "atcoder";
    int a, b;
    cin >> a >> b;
    for(int i = a-1; i<=b-1; i++) {
        cout << st.at(i);
    }
    cout << endl;
    return 0;
}