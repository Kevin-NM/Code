#include <bits/stdc++.h>
using namespace std;
int main(){
	int f1,a,b;
	cin>>f1;
	while(cin>>a>>b){
		int aa=(a+b)/2,bb=(a-b)/2;
		if((a+b)%2==1 || a<b) cout<<"impossible"<<endl;
		else cout<<aa<<" "<<bb<<endl;
	}
}
