#include<bits/stdc++.h>
using namespace std;

long long arr[1000000],a[10000000],b[10000000];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n-1;i++)cin>>a[i];
	for(int i=1;i<=n-2;i++)cin>>b[i];
	sort(arr+1,arr+n+1);
	sort(a+1,a+n);
	sort(b+1,b+n-1);
	int j1,j2;
	a[n]=0;
	b[n]=0;
	b[n-1]=0;
	for(int i=1;i<=n;i++){
		if(arr[i]!=a[i]){
			j1=arr[i];
			break;
		}
		
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]){
			j2=a[i];
			break;
		}
		
	}
	cout<<j1<<endl<<j2<<endl;
}
