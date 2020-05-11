#include<bits/stdc++.h>
using namespace std;

long long arr[1000000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+n+1);
	long long sum=0;
	sum=arr[n]*n;
	for(int i = n-1;i>=1;i--)sum+=arr[i]*(i+1);
	cout<<sum;
}
