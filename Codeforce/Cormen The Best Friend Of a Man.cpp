#include<bits/stdc++.h>
using namespace std;

int arr[10000];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>arr[i];
	int sum=0,max=0;;
	for(int i=1;i<n;i++){
		if(arr[i]+arr[i+1]<k){
			
			sum=k-arr[i]-arr[i+1];
			max+=sum;
			arr[i+1]+=sum;
		}
	}
	cout<<max<<endl;
	for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
}
