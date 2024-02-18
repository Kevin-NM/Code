#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1;cin>>f1;
	vector<pair<int,int>> p(f1);
	for(int i=0;i<f1;i++)cin>>p[i].first>>p[i].second;
	sort(p.begin(),p.end());
	int ans=1,head=p[0].second,headd=p[0].first;
	for(int i=1;i<f1;i++){
		if(headd<=p[i].first&&head>p[i].second){
			head=p[i].second;
			headd=p[i].first;
		}
		if(head<=p[i].first){
			head=p[i].second;
			headd=p[i].first;
			ans++;
		}
	}
	cout<<ans;
}
