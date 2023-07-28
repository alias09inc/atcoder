#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int a=-1, b=-1, c=-1;
    for(int i=0; i<n; i++) {
        switch (s[i])
        {
        case 'A':
            if(a==-1) a=i;
            break;
        
        case 'B':
            if(b==-1) b=i;
            break;
        
        case 'C':
            if(c==-1) c=i;
            break;
        
        default:
            break;
        }
    }

    cout << max({a,b,c})+1 << endl;
    return 0;
}