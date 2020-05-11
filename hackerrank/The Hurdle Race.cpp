#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		
	}
	int maks=-1;
	for(int i=1;i<=n;i++){
		if(arr[i]>=maks)maks=arr[i];
	}
//	cout<<maks<<endl;
	if(maks-k>=0)cout<<maks-k;
	else cout<<0;
}
