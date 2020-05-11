#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
int arr[10000000];

int main(){
	int n,m,k,x,sum=0,y=0;
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++)cin>>arr[i];
	cin>>x;
	for(int i=1;i<=m;i++){
		if(__builtin_popcount(x xor arr[i])<=k)sum++;
	}
	cout<<sum;
	
	
}
