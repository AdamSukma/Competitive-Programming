#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,r,jumlah=0;
	cin>>k>>r;
	for(int i=1;i<=10;i++){
		jumlah=i;
		if(i*k%10==0)break;
		if(((i*k)-r)%10==0)break;
	}
	cout<<jumlah;
}
