#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> mas(h);
    int is_first = 1;
    pair<int, int> koma1, koma2, dista;
    for(int i=0; i<h; i++) {
        cin >> mas[i];
        for(int j=0; j<w; j++) {
            if(mas[i][j] == 'o') {
                if(is_first == 1) {
                    koma1.first = i;
                    koma1.second = j;
                    is_first = 0;
                } else {
                    koma2.first = i;
                    koma2.second = j;
                }
            }
        }
    }
    dista.first = abs(koma1.first - koma2.first);
    dista.second = abs(koma1.second - koma2.second);
    int total_dist = dista.first + dista.second;
    cout << total_dist << endl;
    return 0;
}