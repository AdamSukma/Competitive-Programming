#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	int halaman[n*101];
	int p=0;
	for(int i=1;i<=n;i++){
		int x=arr[i]/k;
		for(int j=1;j<=x;j++){
			p++;
			halaman[p]=k*j;
			
		}
		if(arr[i]%k!=0){
			p++;
			halaman[p]=arr[i];
		}
	}
	//
	int hasil=0;
	for(int i=1;i<=p;i++){
		int a;
		if(halaman[i]%k==0){
			a=halaman[i]-k+1;
			
		}else{
			a=halaman[i]-(halaman[i]%k)+1;
			
		}
		//cout<<a<<" ";
		if(i>=a && i<=halaman[i])hasil++;
	}
	//cout<<endl;
//	for(int i=1;i<=p;i++)cout<<halaman[i]<<" ";
	cout<<hasil;
}
