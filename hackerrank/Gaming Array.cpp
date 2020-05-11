#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main(){
	int t,n;
	cin>>t;
	for(int j=1;j<=t;j++){
		cin>>n;
		LL arr[n];
		for(int i=1;i<=n;i++)cin>>arr[i];
		LL maks=0,sum=0;
		for(int i=1;i<=n;i++){
			if(arr[i]>maks){
				maks=arr[i];
				sum++;
			}
		}
		if(sum%2==0)cout<<"ANDY"<<endl;
		else cout<<"BOB"<<endl;
	}
}
