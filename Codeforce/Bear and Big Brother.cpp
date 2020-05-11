#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	int x1,x2,sum=0;
	cin>>x1>>x2;
	while(x1<=x2){
		x1*=3;
		x2*=2;
		sum++;
		
	}
	cout<<sum;
}
