#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];
int x1[10000000];

int binary(int x,int n){
	int l=1,r=n,m;
	bool temu=false;
	while(l<=r && !temu){
		m=(l+r)/2;
		if(x==x1[r])return r;
		if(x==x1[m])return m;
		if(x==x1[l])return l;
		if(x<x1[m])r=m-1;
		else l=m+1;
		
	}
	//cout<<m<<' '<<l<<' '<<r<<endl;
	return l;
	
}
int main(){
	int n,m,x;
	cin>>n;
	fo(n)cin>>x1[i];
	for(int i=2;i<=n;i++)x1[i]+=x1[i-1];
	//fo(n)cout<<x1[i]<<" ";
	//cout<<endl;
	cin>>m;
	fo(m){
		cin>>x;
		cout<<binary(x,n)<<endl;
	}
}
