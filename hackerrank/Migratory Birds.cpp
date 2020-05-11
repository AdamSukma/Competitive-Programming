#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	int arr1[6]={0,0,0,0,0,0};
	for(int i=1;i<=n;i++)arr1[arr[i]]++;
	int maks=0,p=0;
	
	for(int i=5;i>=1;i--){
		if(arr1[i]>=maks){
			maks=arr1[i];
			p=i;
		}
	}
	cout<<p;


}
