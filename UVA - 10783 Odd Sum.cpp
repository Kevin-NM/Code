#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1,a,b,c=0;cin>>f1;
	while(cin>>a>>b){
		int ans=0;
		for(int i=a;i<=b;i++)
			if(i%2==1)
				ans+=i;
		cout<<"Case "<<++c<<": "<<ans<<endl;
	}
}
