#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1,c=0;cin>>f1;
	int d1,d2,m1,m2,y1,y2;
	char z;
	while(cin>>d1>>z>>m1>>z>>y1>>d2>>z>>m2>>z>>y2){
		cout<<"Case #"<<++c<<": ";
		int ans=y1-y2;
		if(m1<m2||m1==m2&&d1<d2)ans--;
		if(ans<0)cout<<"Invalid birth date";
		else if(ans>130)cout<<"Check birth date";
		else cout<<ans;
		cout<<endl;
	}
}
