#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

vector<string> sai(0);

bool sai_checker(int, int);
int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[] = {1, 1, 1, 0, -1, -1, -1, 0};

int main() {
    int h,w,cnt=0;
    cin >> h >> w;
    string tmp;
    rep(i, h) {
        cin >> tmp;
        sai.push_back(tmp);
    }
    for(int i=1; i<h-1; i++) {
        for(int j=1; j<w-1; j++) {
            if(sai.at(i).at(j)=='.' and sai_checker(i,j)) cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

bool sai_checker(int y, int x) {
    bool flag=true;
    rep(i,8) {
        if(sai.at(y+dy[i]).at(x+dx[i])!='#') {
            flag = false;
            break;
        }
    }
    return flag;
}