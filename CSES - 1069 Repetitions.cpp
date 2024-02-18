#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	int ans=0,ck=1,temp=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'&&ck==2||s[i]=='A'&&ck==1){
			temp++;ck=2;
		}
		if(s[i]=='C'&&ck==3||s[i]=='C'&&ck==1){
			temp++;ck=3;
		}
		if(s[i]=='G'&&ck==4||s[i]=='G'&&ck==1){
			temp++;ck=4;
		}
		if(s[i]=='T'&&ck==5||s[i]=='T'&&ck==1){
			temp++;ck=5;
		}
		if(s[i]!=s[i+1]){temp=0;ck=1;}
		ans=max(ans,temp);
	}
	cout<<ans+1;
