#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	int n,t,sum=0;
	cin>>n>>t;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)sum+=arr[i];
	if(((n-1)*10)+sum>t)cout<<-1;
	else cout<<(t-sum)/5;
}
