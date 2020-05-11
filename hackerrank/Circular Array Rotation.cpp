#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n,k,m;
	cin>>n>>k>>m;
	int arr[n*2+100];
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=n;i<n*2;i++)arr[i]=arr[i-n];
	for(int i=0;i<n*2;i++)cout<<arr[i]<<" "<<endl;
	int q=0;
	k=k%n;
	for(int i=1;i<=m;i++){
		cin>>q;
		cout<<arr[q+k-1]<<endl;
	}
	
}
