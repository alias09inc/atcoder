#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>>query;
	for(int i=0;i<n;i++){
		int l,r;
		cin >> l >> r;
		query.push_back({l,0});//入室
		query.push_back({r,1});//退室
	}//入室を小さい値にすることでソートで同じタイミングの入退室でも入室が上にくる
	sort(query.begin(),query.end());
	
	int cnt=0;
	for(auto[t,f]:query){
		if(f==0){//入室
			if(cnt==0)cout << t << ' ';
			cnt++;
		}else{//退室
			cnt--;
			if(cnt==0)cout << t << endl;
		}
	}
}