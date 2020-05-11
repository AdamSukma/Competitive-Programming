#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+1],urut[n+1],hasil[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		urut[arr[i]]=i;
	}
	for(int i=1;i<=n;i++){
		hasil[arr[i]]=urut[i];
	}
	for(int i=1;i<=n;i++)cout<<hasil[i]<<endl;
	
}
