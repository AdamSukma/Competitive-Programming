#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=0;i<n;i++)cin>>arr[i];
	int b;
	cin>>b;
	int sum=0;
	for(int i=0;i<n;i++){
		if(i!=k)sum+=arr[i];
	}
	sum/=2;
	if(sum==b)cout<<"Bon Appetit";
	else cout<<b-sum;
}
