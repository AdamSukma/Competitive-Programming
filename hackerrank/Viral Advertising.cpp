#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>k;
	n=5;
	int sum=0;
	for(int i=1;i<=k;i++){
		n/=2;
		sum+=n;;
		n*=3;
	}
	cout<<sum;
}
