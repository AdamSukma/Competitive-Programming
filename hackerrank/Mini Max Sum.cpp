#include<bits/stdc++.h>
using namespace std;

int main(){
	long long arr[10];
	for(int i=1;i<=5;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+1+5);
	long long sum=0;
	for(int i=1;i<=5;i++)sum+=arr[i];
	cout<<sum-arr[5]<<" "<<sum-arr[1];
}
