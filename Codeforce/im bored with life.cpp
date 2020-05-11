#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int sum=1;
	for(int i=1;i<=min(a,b);i++){
		sum*=i;
	}
	cout<<sum;
}
