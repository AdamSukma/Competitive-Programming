#include<bits/stdc++.h>
using namespace std;
bool cek[1000000];
int arr[1000000];

int main(){
	int n,t;
	cin>>n>>t;
	for(int i=1;i<n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)cek[i]=0;
	cek[1]=1;
	for(int i=1;i<n;i++){
		if(cek[i]==1)cek[i+arr[i]]=1;
		//cout<<i+arr[i]<<" ";
	}
	
	if(cek[t]==1)cout<<"YES";
	else cout<<"NO";
}
