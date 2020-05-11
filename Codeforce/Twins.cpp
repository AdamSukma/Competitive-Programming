#include<bits/stdc++.h>

using namespace std;
int arr[10000];
int main(){
	int n,sum=0,sisa,jumlah=0,koin=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+n+1);
	for(int i=1;i<=n;i++)sum+=arr[i];
	sisa=sum;
	for(int i=n;i>0;i--){
		sisa-=arr[i];
		jumlah+=arr[i];
		if(jumlah<=sisa)koin++;
		else break;
	}
	cout<<koin+1<<endl;
	
	
	
}
