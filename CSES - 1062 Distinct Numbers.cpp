#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1,temp;cin>>f1;
	set<int> s;
	for(int i=0;i<f1;i++){
		cin>>temp;
		s.insert(temp);
	}
	int s_count=0;
	for(auto &c:s)s_count++;
	cout<<s_count;
}
