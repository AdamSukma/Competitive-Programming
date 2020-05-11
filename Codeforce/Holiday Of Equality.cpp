#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
int main(){
	int n,sum=0,max=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		if(max<arr[i])max=arr[i];
		sum+=arr[i];
	}
	cout<<(max*n)-sum;
}
