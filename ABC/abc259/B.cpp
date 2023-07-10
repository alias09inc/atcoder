#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    double x,y,sita;
    cin >> x >> y >> sita;
    double newx = x*cos(sita*M_PI/180) - y*sin(sita*M_PI/180);
    double newy = x*sin(sita*M_PI/180) + y*cos(sita*M_PI/180);
    //cout << newx << " " << newy << endl;
    printf("%.8f %.8f\n", newx, newy);
    return 0;
}