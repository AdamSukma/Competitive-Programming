#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main(){
	int n;float sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)sum+=arr[i];
	cout<<ceil(sum/5);
}
