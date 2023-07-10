#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum, tmp;

    for(int i=0; i<7*N; i++) {
        cin >> tmp;
        sum += tmp;
        if(i+1%7 == 0) {
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
