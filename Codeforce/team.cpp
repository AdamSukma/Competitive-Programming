#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum;
	cin>>n;
	int a[10000],b[10000],c[10000];
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>b[i]>>c[i];
		if((a[i] && (b[i] || c[i])) ||  (b[i] && (a[i] || c[i])))sum++; 
	}
	cout<<sum;
	
}
