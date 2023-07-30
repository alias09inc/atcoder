#include <bits/stdc++.h>
using namespace std;

int n, m;

vector<string> codes;

bool checker(vector<string> codelist, int y, int x) {
    bool flag = true;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(codelist[y+i][x+j] != '#') {
                flag = false;
                break;
            }
            if(codelist[y+8-i][x+8-j] != '#') {
                flag = false;
                break;
            }
        }
        if(flag == false) break;
    }
    for(int i=0; i<3; i++) {
        if(codelist[y+i][x+3] != '.') {
            flag = false;
            break;
        }
        if(codelist[y+3][x+i] != '.') {
            flag = false;
            break;
        }
        if(codelist[y+8-i][x+5] != '.') {
            flag = false;
            break;
        }
        if(codelist[y+5][x+8-i] != '.') {
            flag = false;
            break;
        }
    }
    if(codelist[y+3][x+3] != '.') {
        flag = false;
    }
    if(codelist[y+5][x+5] != '.') {
        flag = false;
    }
    return flag;
}

int main() {
    cin >> n >> m;
    codes.resize(n);

    for(int i=0; i<n; i++) {
        cin >> codes[i];
    }

    vector<pair<int, int>> qrs;
    for(int i=0; i<n-8; i++) {
        for(int j=0; j<m-8; j++) {
            if(checker(codes, i, j)) {
                qrs.push_back(make_pair(i+1, j+1));
            }
        }
    }
    for(int i=0; i<qrs.size(); i++) {
        cout << qrs[i].first << " " << qrs[i].second << endl;
    }
    return 0;
}