#include <bits/stdc++.h>
using namespace std;

int x1[100000];

int binary(int x,int n){
	int l=1,r=n,m;
	bool temu=false;
	while(l<=r && !temu){
		//cout<<x<<" "<<l<<" "<<r<<endl;
		m=(l+r)/2;
		if(x==x1[r])return r;
		if(x==x1[l])return l;
		if(x<x1[m])l=m+1;
		else r=m-1;
		
	}
	//cout<<m<<' '<<l<<' '<<r<<endl;
	return l;
	
}
int main(){
	int n,t,a,k=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a!=x1[k]){
			k++;
			x1[k]=a;
		//	cout<<a<<endl;
			
		}
	}
	

	//for(int i=1;i<=k;i++)cout<<x1[i]<<' ';
	
	cin>>t;
	for(int i=1;i<=t;i++){
		int cari;
		cin>>cari;
		cout<<binary(cari,k)<<endl;
		
	}
}
