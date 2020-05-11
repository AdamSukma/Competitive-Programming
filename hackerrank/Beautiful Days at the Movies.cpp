#include<bits/stdc++.h>
using namespace std;
#define LL long long

LL balik(LL x){
	int n=0;
	while(x>0){
		n+=x%10;
		x/=10;
		if(x>0)n*=10;
	}
	return n;
}

int main(){
	int k,l,m,sum=0;
	cin>>k>>l>>m;
	for(LL i=k;i<=l;i++){
		if(abs(i-balik(i))%m==0)sum++;
		cout<<balik(i)<<endl;
	}
	cout<<sum;
	
}
