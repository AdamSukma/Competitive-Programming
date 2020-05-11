#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	LL y,bk;
	cin>>y>>bk;
	LL r,g,b;
	cin>>r>>g>>b;
	LL sumy=0,sumb=0;
	sumy+=(2*r)+g;
	sumb+=(3*b)+g;
	LL result=0;
	if(y<sumy)result+=sumy-y;
	if(bk<sumb)result+=sumb-bk;
	cout<<result;
}
