#include<bits/stdc++.h>
using namespace std;
int main(){
	int f1;
	string text;
	cin>>f1; getline(cin,text);
	
	while(getline(cin,text),f1--){
		text.erase(remove(text.begin(),text.end(),' '),text.end());
		int ans=0;
		for(int i=0; i<16; i++){
			if((text[i]-'0')==0) continue; 
			else if(i%2==0)	{
				if((text[i]-'0')*2>9){
					ans+=((text[i]-'0')*2)%10+1;
				}
					
				else{
					ans+=(text[i]-'0')*2;
				}
					
			}
			else if(i%2!=0){
				ans+=text[i]-'0'; 
			}
		}
		if(ans%10==0)	cout<<"Valid";
		else cout<<"Invalid";
		cout<<"\n";
	}
}
