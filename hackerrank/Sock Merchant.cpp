#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+1+n);
	int sum=0;
	for(int i=1;i<=n;i++){
		if(arr[i]==arr[i+1]){
			sum++;
			arr[i]=-1;
			arr[i+1]=-1;
		}
	}
	cout<<sum;
}
