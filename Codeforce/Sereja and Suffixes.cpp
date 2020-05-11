#include<bits/stdc++.h>
using namespace std;
int arr[1000000],x[1000000],a[1000000],memo[1000000];
int cek[1000000];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=m;i++)cin>>x[i];
for(int i=1;i<=n;i++)a[i]=arr[i];
	sort(a+1,a+n+1);
	int beda=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1])beda++;
		
	}
	
	//cout<<beda<<endl;
	
	for(int i=1;i<=n;i++)cek[arr[i]]+=1;
	for(int i=1;i<=n;i++){
		memo[i]=beda;
		cek[arr[i]]--;
		if(cek[arr[i]]<=0)beda--;
		
		
	}
	for(int i=1;i<=m;i++)cout<<memo[x[i]]<<endl;
	
	
	
}
