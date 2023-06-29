#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n, w;
    cin >> n >> w;
    vector<int> omori(n);
    vector<bool> yoiseisu(w+1, false);
    for(int i=0; i<n; i++) {
        cin >> omori.at(i);
        if(omori.at(i)<=w) yoiseisu.at(omori.at(i)) = true;
    }
    int wa;
    int wa2;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            wa = omori.at(i)+omori.at(j);
            if(wa <= w) yoiseisu.at(wa) = true;
            for(int m=j+1; m<n; m++) {
                wa2 =  wa + omori.at(m);
                if(wa2 <= w) yoiseisu.at(wa2) = true;
            }
        }
    }
    int cnt=0;
    for(int i=1; i<=w; i++) {
        if(yoiseisu.at(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}