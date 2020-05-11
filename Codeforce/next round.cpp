#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
int main(){
	int n,k,sum,max;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	max=arr[k];
	for(int i=1;i<=n;i++)
	if(arr[i]>=max && arr[i]>0)sum++;	
	
	cout<<sum<<endl;
	
}
