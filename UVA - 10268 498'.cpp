#include <bits/stdc++.h>
using namespace std;
int main(){
	int f1;
	while(cin>>f1){
		string s;
		getline(cin,s);getline(cin,s);
		int n=-1,ss;
		long long val=0;
		istringstream sin(s);
		istringstream ssin(s);
		while(sin>>ss)n++;
		while(ssin>>ss){
			if(!n)break;
			val*=f1;
			val+=n--*ss;
		}
		cout<<val<<endl;
	}
}
