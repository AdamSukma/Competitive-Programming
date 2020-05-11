#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,d,m;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=2;i<=n;i++)arr[i]+=arr[i-1];
	cin>>d>>m;
	int sum=0;
	//for(int i=1;i<=n;i++)cout<<arr[i]<<"  ";
	//cout<<endl;
	arr[0]=0;
	for(int i=0;i<=n-m+1;i++){
		if(abs(arr[i]-arr[i+m])==d){
			sum++;
			
		}
	}
	cout<<sum;
}
