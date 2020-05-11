#include<bits/stdc++.h>
using namespace std;

int fpb(int a,int b){
	if(b==0) return a;
	else{
		
		return fpb(b,a % b);
	}
}

int main(){
	int a,b,n,sisa,sum=0,x;
	cin>>a>>b>>n;
	sisa=n;
	while(sisa>0){
		if(sum%2==0)x=fpb(sisa,a);
		else x=fpb(sisa,b);
		
		sum++;
		sisa-=x;
		//cout<<sum<<' '<<sisa<<' '<<x<<endl;
	}
	if(sum%2)cout<<0<<endl;
	else cout<<1<<endl;
	
	//cout<<sum<<endl;
}
