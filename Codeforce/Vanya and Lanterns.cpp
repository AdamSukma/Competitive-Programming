#include<bits/stdc++.h>
using namespace std;

long long arr[100000];

int main(){
int n,l;float selisih=0,x,y;
cin>>n>>l;
arr[0]=0;
arr[n+1]=l;
for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr,arr+n+2);
	//for(int i=0;i<=n+1;i++)cout<<arr[i]<<"   ";
	for(int i=0;i<=n;i++){
		if(selisih<=arr[i+1]-arr[i])selisih=arr[i+1]-arr[i];
	}
	cout<<setprecision(10)<<fixed;
	x=arr[1];
	y=l-arr[n];
	x=max(x,y);
	if(x>selisih/2)cout<<x<<endl;
	else cout<<selisih/2<<endl;
}
