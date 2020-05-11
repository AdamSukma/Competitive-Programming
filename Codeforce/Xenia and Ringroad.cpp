#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main(){
	long long n,m,hasil;
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>arr[i];
	hasil=arr[1]-1;
	//cout<<hasil<<endl;
	for(int i=2;i<=m;i++){
		if(arr[i]>arr[i-1])hasil+=arr[i]-arr[i-1];
		else if(arr[i]<arr[i-1])hasil+=(n-arr[i-1])+arr[i];
		//cout<<hasil<<endl;
	}
	cout<<hasil<<endl;
}
