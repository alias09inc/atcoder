#include <bits/stdc++.h>
using namespace std;
/*
dpで行の候補を全て出す
その後縦の組み合わせがOKかを調べる？
一行目の頭と二行目頭の和が決まると三行目の頭の値が決まる
違う場合は頭の値が新しくなるまで飛ばす
その間隔はh3のjが回った回数
*/
struct make_line{
    int ho1;
    int ho2;
    int ho3;
};

int main() {
    int h1,h2,h3,w1,w2,w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    make_line line;
    vector<make_line> line1(0), line2(0), line3(0);
    for(int i=1; i<=h1-2; i++) {
        for(int j=1; j<=h1-i-1; j++) {
            line.ho1 = i;
            line.ho2 = j;
            line.ho3 = h1-i-j;
            line1.push_back(line);
        }
    }
    for(int i=1; i<=h2-2; i++) {
        for(int j=1; j<=h2-i-1; j++) {
            line.ho1 = i;
            line.ho2 = j;
            line.ho3 = h2-i-j;
            line2.push_back(line);
        }
    }
    //int cnt = 0;
    for(int i=1; i<=h3-2; i++) {
        //cnt = 0;
        for(int j=1; j<=h3-i-1; j++) {
            //cnt++;
            line.ho1 = i;
            line.ho2 = j;
            line.ho3 = h3-i-j;
            line3.push_back(line);
        }
        //cout << cnt << endl;
    }
    int cnt = 0;
    //cout << line1.size() << " " << line2.size() << " " << line3.size() << endl;
    for(int i=0; i<line1.size(); i++) {
        for(int j=0; j<line2.size(); j++) {
            for(int k=0; k<line3.size(); k++) {
                int l1= w1 - line1.at(i).ho1 - line2.at(j).ho1;
                if(l1 != line3.at(k).ho1) {
                    k += h3 - line3.at(k).ho1 -2;
                    continue;
                }
                int l2= w2 - line1.at(i).ho2 - line2.at(j).ho2 - line3.at(k).ho2;
                if(l2 != 0) continue;
                int l3= w3 - line1.at(i).ho3 - line2.at(j).ho3 - line3.at(k).ho3;
                if(l3 == 0) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}