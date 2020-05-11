#include<bits/stdc++.h>
using namespace std;

int arr[1000000],hasil[1000000];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)hasil[arr[i]]=i;
	for(int i=1;i<n;i++)cout<<hasil[i]<<' ';
	cout<<hasil[n]<<endl;
	
}
