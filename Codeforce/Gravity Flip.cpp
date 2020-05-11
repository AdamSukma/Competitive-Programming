#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
bool compare(int a,int b){
	return b>a;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+n+1,compare);
	for(int i=1;i<n;i++)cout<<arr[i]<<' ';
	cout<<arr[n]<<endl;
}
