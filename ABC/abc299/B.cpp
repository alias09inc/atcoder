#include <bits/stdc++.h>
using namespace std;

int n, t;
int c[200001], r[200001];

int main(void)
{
  cin >> n >> t;
  for(int i = 1; i <= n; i++) cin >> c[i];
  for(int i = 1; i <= n; i++) cin >> r[i];
  
  pair<int, int> tmax = {-1, -1}, lmax = {-1, -1};
  for(int i = 1; i <= n; i++){
    if(c[i] == t) tmax = max(tmax, {r[i], i});
    if(c[i] == c[1]) lmax = max(lmax, {r[i], i});
  }
  if(tmax.first != -1) cout << tmax.second << endl;
  else cout << lmax.second << endl;
  
  return 0;
}  
