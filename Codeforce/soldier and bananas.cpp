#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k,w,sum,x;
	cin>>k>>n>>w;
	x=k;
	for(int i=1;i<=w;i++){
		//cout<<x<<' ';
		sum+=x;
		x=(i+1)*k;
	}
	if(n-sum>=0)cout<<0<<endl;
	else cout<<sum-n-1<<endl;
	
}
