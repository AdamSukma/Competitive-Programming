#include<bits/stdc++.h>

using namespace std;
int a[1000000];
int b[1000000];
int sum[100000];
int main(){
	int n;
	cin>>n;
	sum[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		//cout<<sum[i]<<endl;
		sum[i]+=b[i]-a[i]+sum[i-1];
		//cout<<sum[i]<<endl;
		
	}
	int max=0;
	for(int i=1;i<=n;i++){
		if(max<sum[i])max=sum[i];
	}
	cout<<max<<endl;
	
}
