#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n,c=0;
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
		if(c++)cout<<" ";
		if(n%2==1)n=n*3+1;
		else n/=2;
		cout<<n;
	}
}
