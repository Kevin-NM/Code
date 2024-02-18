#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1,x,y;cin>>f1;
	while(cin>>y>>x){
		if(x>y){
			if(x%2==1){
				cout<<x*x-y+1;
			}
			else if(x%2==0){
				int xx=(x-1);
				cout<<xx*xx+y;
			}
		}
		else{
			if(y%2==1){
				int yy=(y-1);
				cout<<yy*yy+x;
			}
			else if(y%2==0){
				cout<<y*y-x+1;
			}
		}
		cout<<endl;	
	}
}
