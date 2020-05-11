#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)

LL arr[10000000];

int main(){
	int n,c,sum=0;
	cin>>n>>c;
	fo(n)cin>>arr[i];
	arr[n+1]=0;
	for(int i=n+1;i>=2;i--){
		if(arr[i]-arr[i-1]<=c)sum++;
		else break;
	}
	cout<<sum;
}
