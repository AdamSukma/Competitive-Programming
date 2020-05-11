#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[1000000];
long long binary(long long x,long long n){
	long long l=1,r=n,m;
	bool temu=false;
	while(l<=r && !temu){
		m=(l+r)/2;
		if(x==a[r])return r;
		
		if(x<a[m])r=m-1;
		else l=m+1;
		
	}
	//cout<<m<<' '<<l<<' '<<r<<endl;
	return r;
	
}
int main(){
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++)cin>>b[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
		cout<<binary(b[i],n)<<" ";
	}
}
