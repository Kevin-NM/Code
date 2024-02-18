#include <bits/stdc++.h>
using namespace std;
#define int long long
/*
    2
   314
    5
    6
*/
signed main(){
	int f1;
	while(cin>>f1,f1){
		string way;
		char arr[7]={0,1,2,3,4,5,6};
		int ans,temp;
		while(f1--){
			cin>>way;
/*
    2   1
   314 354
    5   6
    6   2
*/
			if(way=="north"){
				temp=arr[2];
				arr[2]=arr[1];
				arr[1]=arr[5];
				arr[5]=arr[6];
				arr[6]=temp;
			}
/*
    2   6
   314 324
    5   1
    6   5
*/

			else if(way=="south"){
				temp=arr[6];
				arr[6]=arr[5];
				arr[5]=arr[1];
				arr[1]=arr[2];
				arr[2]=temp;
			}
/*
    2   2
   314 631
    5   5
    6   4
*/
			else if(way=="east"){
				temp=arr[1];
				arr[1]=arr[3];
				arr[3]=arr[6];
				arr[6]=arr[4];
				arr[4]=temp;
			}
/*
    2   2
   314 146
    5   5
    6   3
*/
			else if(way=="west"){
				temp=arr[1];
				arr[1]=arr[4];
				arr[4]=arr[6];
				arr[6]=arr[3];
				arr[3]=temp;
			}
			ans=arr[1];
		}
		cout<<ans<<endl;
	}
}
