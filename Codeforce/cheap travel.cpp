#include<bits/stdc++.h>
using namespace std;

long long dp(int x){
	
}

int main(){
	int n,m,a,b,hasil=0,x,y,z,bagi;
	cin>>n>>m>>a>>b;
	bagi=n/m;
	int q;
	if(n%m!=0){
		q=bagi+1;
	}else q=bagi;
	//cout<<q<<endl;
	x=n*a;
	y=b*q;
	z=(bagi*b)+((n-(m*bagi))*a);
	
	hasil=min(x,y);
	hasil=min(hasil,z);
	cout<<hasil<<endl;
}
