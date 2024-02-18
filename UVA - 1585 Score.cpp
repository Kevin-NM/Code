#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1;cin>>f1;
	string s;getline(cin,s);
	while(f1--){
		getline(cin,s);
			int temp=0,ans=0;
			for(int i=0;i<s.size();i++){
				if(s[i]=='O')temp++;
				else temp=0;
				ans+=temp;
			}
			cout<<ans<<endl;
		}
	
}
