#include<bits/stdc++.h>
using namespace std;
int arr[1000000],sum[1000000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+n+1);
	memset(sum,0,1000000);
	for(int i=1;i<=n;i++){
		sum[arr[i]]+=1;
	}
	
}
