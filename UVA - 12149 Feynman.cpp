#include <bits/stdc++.h>
using namespace std;
int main(){
	int num;
	while(cin>>num,num){
		int ans=0;num++;
		while(num--) ans+=num*num;
		cout<<ans<<endl;
	}
} 
