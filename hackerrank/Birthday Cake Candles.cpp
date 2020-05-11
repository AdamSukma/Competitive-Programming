#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<long long> arr(n);
	for(int i=1;i<=n;i++)cin>>arr[i];
	long long maks=0,sum=0;
	for(int i=1;i<=n;i++){
		if(arr[i]>maks){
			maks=arr[i];
			sum=0;
		}
		if(arr[i]==maks)sum++;
	}
	cout<<sum;
}
