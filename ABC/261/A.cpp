#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int left = max(a,c);
    int right = min(b,d);
    int diff = right - left;
    if(diff <=0) {
        cout << 0 << endl;
    } else {
        cout << diff << endl;
    }
    return 0;
}