#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int a;cin>>a;
	/*int fab[39];fab[0]=1;fab[1]=2;
	for(int i=2;i<39;i++) fab[i]=fab[i-2]+fab[i-1];
	for(int i=38;i>0;i--) cout<<fab[i]<<",";*/
	vector<int> list={102334155,63245986,39088169,24157817,14930352,9227465,5702887,3524578,2178309,1346269,832040,514229,317811,196418,121393,75025,46368,28657,17711,10946,6765,4181,2584,1597,987,610,377,233,144,89,55,34,21,13,8,5,3,2,1,1,0};
	while(cin>>a){
		int ck=0;
		cout<<a<<" = ";
		for(int i=0;i<39;i++){
			if(a-list[i]>=0){
				cout<<"1";
				ck++;
				a-=list[i];
			}
			else if(ck) cout<<"0";
		}
		cout<<" (fib)"<<endl;
	}
}
