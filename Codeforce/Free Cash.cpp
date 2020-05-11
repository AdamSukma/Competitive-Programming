#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	int n,a,b,as=99,bs=99,maks=1,sum=0;
	cin>>n;
	fo(n){
		cin>>a>>b;
		if(a==as && b==bs)sum++;
		else sum=1;
		maks=max(sum,maks);
		as=a;bs=b;
	}
	cout<<maks;
}
