#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int sum=a+b;
	while(sum<=0){
		sum+=n;
	}
	if(sum>n)sum=sum%n;
	if(sum==0)sum=n;
	cout<<sum;
}
