#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int f1,a,b;cin>>f1;
	string s;getline(cin,s);getline(cin,s);
	while(cin>>a>>b){f1+=b;f1--;
		for(int i=1;i<=b;i++){f1--;
			int temp=0,count=0;
			for(int i=1;i<=a;i++){temp=0;count++;
				temp+=count;
				while(temp--)cout<<i;
				cout<<endl;
			}
			for(int i=a-1;i>=0;i--){temp=0;count--;
				temp+=count;
				while(temp--)cout<<i;
				if(f1||i!=1)cout<<endl;
				else break;
			}
		}
		getline(cin,s);getline(cin,s);
	}cout<<endl;
}
