#include <bits/stdc++.h>
using namespace std;
int main(){
	int f1,day,ba_day,ba;
	cin>>f1;
	while(cin>>day){
		cin>>ba_day;
		set<int> st;
		for(int i=0;i<ba_day;i++){
			cin>>ba;
			for(int j=0;j<=day;j++){
				if(j%7!=0 && j%7!=6 && j%ba==0) st.insert(j);
			}
		}
		cout<<st.size()<<endl;
	}
}
