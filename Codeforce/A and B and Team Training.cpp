#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,sum=0;
	cin>>n>>m;
	//n<m 4 5
	if(n>m){
		n+=m;
		m=n-m;
		n=n-m;
	}
	int selisih= m-n;
	while(selisih<n){
		selisih+=2;
		n--;
	}

	cout<<n;
}
