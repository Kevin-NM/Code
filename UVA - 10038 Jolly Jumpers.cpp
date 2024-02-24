#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,f1,f2;
	while(cin>>n>>f2){
		set<int> st;
		for(int i=1;i<n;i++){
			cin>>f1;
			int temp=abs(f1-f2);f2=f1;
			if(temp<n && temp>0) st.insert(temp);
		}
		if(st.size()==n-1) cout<<"Jolly"<<endl;
		else cout<<"Not jolly"<<endl;
	}
}
