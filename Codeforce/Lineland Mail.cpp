#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	LL n,mini,maxi;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		mini=9999999999999;
		
		if(i!=1){
			mini=min(mini,abs(arr[1]-arr[i]));
		mini=min(mini,abs(arr[i-1]-arr[i]));
		}
		if(i!=n){
			mini=min(abs(arr[n]-arr[i]),mini);
		mini=min(mini,abs(arr[i+1]-arr[i]));
	}
		
		maxi=max(abs(arr[1]-arr[i]),abs(arr[n]-arr[i]));
		if(i!=1)maxi=max(maxi,abs(arr[i-1]-arr[i]));
		if(i!=n)maxi=max(maxi,abs(arr[i+1]-arr[i]));
		cout<<mini<<" "<<maxi<<endl;
	}
}
