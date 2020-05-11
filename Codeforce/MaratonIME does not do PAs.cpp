#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,t,sum=0;;
	cin>>n>>t;
	long long a[100001],b[100001];
	
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	sort(a+1,a+n+1);
	a[1]+=t;
	for(int i=2;i<=n;i++)a[i]+=a[i-1];
	for(int i=1;i<=n;i++){
		sum+=a[i]-b[i];
	}
	
	cout<<sum;
	
}
