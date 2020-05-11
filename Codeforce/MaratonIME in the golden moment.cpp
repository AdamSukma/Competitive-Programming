#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main(){
	int n;
	cin>>n;
	long long sum=0,x=0;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=n;i>=1;i--){
		sum+=arr[i]*x;
		x+=arr[i];
	}
	cout<<sum;
}
