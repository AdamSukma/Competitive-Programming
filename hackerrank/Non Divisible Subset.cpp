#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	long long arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)arr[i]=arr[i]%k;
	sort(arr+1,arr+1+n);
	long long sisa[k+1];
	for(int i=0;i<=k;i++)sisa[i]=0;
	for(int i=1;i<=n;i++)sisa[arr[i]]++;
	//for(int i=0;i<=k;i++)cout<<sisa[i]<<" ";
	//cout<<endl;
	int sum=0;
	if(sisa[0]>=1)sum++;
	if(sisa[k/2]>=1 && k%2==0)sum++;
	for(int i=1;i<k/2+1;i++){
			//cout<<sisa[i]<<" "<<sisa[k-i]<<endl;
			if(i==k/2 && k%2==0)sisa[i]=0;
			sum+=max(sisa[i],sisa[k-i]);
			sisa[i]=0;
			sisa[k-i]=0;
		
	}
	cout<<sum;
	
	
}
