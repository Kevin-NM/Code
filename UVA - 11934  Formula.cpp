#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int a,b,c,d,e;
	while(cin>>a>>b>>c>>d>>e,a+b+c+d+e){
		int ans=0;
		for(int x=0;x<=e;x++)
			if((a*x*x+b*x+c)%d==0)
				ans++;
		cout<<ans<<endl;
	}
}
