#include<bits/stdc++.h>
using namespace std;

int a[10000000],b[10000000];
int main(){
	int n,harga=9999,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++){
		if(harga>b[i])harga=b[i];
		sum+=a[i]*harga;
	}
	cout<<sum;
	
	
}
