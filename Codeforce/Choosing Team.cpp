#include<bits/stdc++.h>
using namespace std;

int arr[10000000];
int main(){
	int n,k,sum=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		if(arr[i]+k<=5)sum++;
	}
	cout<<sum/3<<endl;
}
