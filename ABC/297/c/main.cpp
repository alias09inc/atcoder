#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0; i<h; i++) {
        cin >> s[i];
    }

    for(int i=0; i<h; i++) {
        int index=0;
        while(index < w-1) {
            if(s[i][index] == 'T' and s[i][index+1] == 'T') {
                s[i][index] = 'P';
                s[i][index+1] = 'C';
                index += 2;
            } else {
                index++;
            }
        }
    }
    for(int i=0; i<h; i++) cout << s[i] << endl;
    return 0;
}