#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1;cin>>f1;
	int a[f1];
	for(int i=0;i<f1-1;i++)cin>>a[i];
	sort(a,a+f1);
	for(int i=0;i<f1;i++){
		if(a[0]!=1){
			cout<<"1";
			break;
		}
		if(a[i+1]-a[i]!=1){
			cout<<a[i]+1;
			break;
		}
	}
}
